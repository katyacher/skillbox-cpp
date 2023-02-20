#include <iostream>
#include <sstream>

int main() {
    std::cout << "16.5 SmartHouse\n";

    enum switches {
      LIGHTS_INSIDE = 1,
      LIGHTS_OUTSIDE = 2,
      HEATERS = 4,
      WATER_PIPE_HEATING = 8,
      CONDITIONER = 16
    };

    int switches_state = 0;
    std::string buffer;
    int t_out;
    int t_in;
    std::string move;
    std::string light_inside;
    int color_t = 5000;

    for(int day = 1; day <= 2; ++day){
      std::cout << "Press y/n to continue ";
      char answer;
      std::cin >> answer;
      if(answer == 'n') break;
      std::cout << day << " day:"  << std::endl;

      for(int time = 0; time < 24; time++){
        std::cout << "Time: " << time << ":00" << std::endl;
        std::cout<< "Enter the outside and inside temperature,";
        std::cout << "presence of movement YES/NO, is the light ON/OFF: ";
        std::cin.ignore();
        std::getline(std::cin, buffer);
        std::stringstream buffer_stream(buffer);
        buffer_stream >>  t_out >> t_in >> move >>  light_inside;

        if(time == 0) color_t = 5000;

/* Как только температура снаружи падает ниже 0 °С, надо включить систему обогрева водопровода. Если температура снаружи поднялась выше 5 °С, то систему обогрева водопровода нужно отключить.*/
        if(t_out < 0 && !(switches_state & WATER_PIPE_HEATING)){
          switches_state |= WATER_PIPE_HEATING;
          std::cout << "WATER_PIPE_HEATING is ON" << std::endl;
        }
        if (t_out > 5 && (switches_state & WATER_PIPE_HEATING)){
          switches_state &= ~WATER_PIPE_HEATING;
          std::cout << "WATER_PIPE_HEATING is OFF" << std::endl;
        }
/*Если на дворе вечер (время больше 16:00 и меньше 5:00 утра) и
  * снаружи есть какое-то движение, то необходимо включить садовое освещение.
* Если движения нет или время не вечернее, то света снаружи быть не должно.*/

        if((move == "YES") && ((time > 16 && time < 24)
          ||(time >= 0 && time < 5))  && !(switches_state & LIGHTS_OUTSIDE)){
          switches_state |= LIGHTS_OUTSIDE;
          std::cout << "LIGHTS_OUTSIDE is ON" << std::endl;
        }
        if (move == "NO" && (switches_state & LIGHTS_OUTSIDE)){
          switches_state &= ~LIGHTS_OUTSIDE;
          std::cout << "LIGHTS_OUTSIDE is OFF" << std::endl;
        }
        
/* Если температура в помещении упала ниже 22 °С, должно включиться отопление. Как только температура равна или поднимается выше 25 °С, отопление автоматически отключается.*/
        if(t_in < 22 && !(switches_state & HEATERS)){
          switches_state |= HEATERS;
          std::cout << "HEATERS is ON" << std::endl;
        }
        if(t_in >= 25 &&  (switches_state & HEATERS)){
          std::cout << "HEATERS is OFF" << std::endl;
        }
        
/*Если температура в помещении поднялась до 30 °С, включается кондиционер. Как только температура становится 25 °С, кондиционер отключается.*/
        if(t_in >=30 && !(switches_state & CONDITIONER)){
          switches_state |= CONDITIONER;
          std::cout << "CONDITIONER is ON" << std::endl;
        }
        if(t_in <= 25 && (switches_state & CONDITIONER)){
          switches_state &= ~CONDITIONER;
          std::cout << "CONDITIONER is OFF" << std::endl;
        }
/*Всё освещение в доме также умное и поддерживает настройку цветовой температуры для комфортного нахождения.
  * Каждый день начиная с 16:00 и до 20:00 температура цвета должна плавно изменяться с 5000K до 2700К.
  * Разумеется, это изменение должно происходить, если свет сейчас включён. В 00:00 температура сбрасывается до 5000К.*/
        if(light_inside == "ON" && !(switches_state & LIGHTS_INSIDE)){
          switches_state |= LIGHTS_INSIDE;
          std::cout << "LIGHTS_INSIDE is ON" << std::endl;
        } else if (light_inside == "OFF" && (switches_state & LIGHTS_INSIDE)){
          switches_state &= ~LIGHTS_INSIDE;
          std::cout << "LIGHTS_INSIDE is OFF" << std::endl;
        }

        if(switches_state & LIGHTS_INSIDE){
          if(time > 16 && time <= 20 ){
            color_t -= 575;
          }
          std::cout << "Сolor temperature = " << color_t << " K" << std::endl;
        }
      }
  }
}

