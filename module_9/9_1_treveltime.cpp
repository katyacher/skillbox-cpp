#include <iostream>

int main() {
  std::cout << "9.1 Trevel time.\n";

  std::cout << "Input the time in HH:MM format: ";
  std::string departure_time_str;
  std::cin >> departure_time_str;

  std::cout << "Input the time in HH:MM format: ";
  std::string arrival_time_str;
  std::cin >> arrival_time_str;
  
  if(departure_time_str.length() != 5 || departure_time_str[2] != ':' 
      || departure_time_str[0] < '0' || departure_time_str[0] > '9' 
      || departure_time_str[1] < '0' || departure_time_str[1] > '9' 
      || departure_time_str[3] < '0' || departure_time_str[3] > '9' 
      || departure_time_str[4] < '0' || departure_time_str[4] > '9'
      || arrival_time_str.length() != 5 || arrival_time_str[2] != ':' 
      || arrival_time_str[0] < '0' || arrival_time_str[0] > '9' 
      || arrival_time_str[1] < '0' || arrival_time_str[1] > '9' 
      || arrival_time_str[3] < '0' || arrival_time_str[3] > '9' 
      || arrival_time_str[4] < '0' || arrival_time_str[4] > '9' ){
    std::cout << "Error 1\n ";
  } else {
    int departure_hours_int = 10 * (departure_time_str[0] - '0') + 
       (departure_time_str[1] - '0');
    int departure_minutes_int = 10 * (departure_time_str[3] - '0') +
       (departure_time_str[4] - '0');

    int arrival_hours_int = 10 * (arrival_time_str[0] - '0') + 
       (arrival_time_str[1] - '0');
    int arrival_minutes_int = 10 * (arrival_time_str[3] - '0') +
       (arrival_time_str[4] - '0');

    if (departure_hours_int > 23 || departure_minutes_int > 59 
        || arrival_hours_int > 23 || arrival_minutes_int > 59){
      std::cout << "Error 2.\n ";
    } else {
      int departure_in_minutes = 60 * departure_hours_int + departure_minutes_int;

      int arrival_in_minutes = 60 * arrival_hours_int + arrival_minutes_int;

      int trevel_time_in_minutes = departure_in_minutes < arrival_in_minutes ? (arrival_in_minutes - departure_in_minutes) : (24 * 60 - departure_in_minutes + arrival_in_minutes);

      std::cout << "The train is on the way for " << trevel_time_in_minutes/60 << " hours " << trevel_time_in_minutes % 60 << " minutes.\n";
    }
  }
}
