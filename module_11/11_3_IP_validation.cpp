#include <iostream>

bool check_dots_count(std::string ip_str);
std::string get_ip_part(std::string ip);
bool valid_ip_part(std::string ip_part); 

int main() {
  std::cout << "IP address validation.\n";

  std::cout << "Input IP adress: " << std::endl;
  std::string ip_str = "";
  std::getline(std::cin, ip_str);

  if(!check_dots_count(ip_str)){
    std::cout << "Incorrect! Extra dot." << std::endl;
    return 0;
  }

  for(int i = 0; i < 4; i++){
    std::string ip_part = "";
    ip_part = get_ip_part(ip_str);
    if(valid_ip_part(ip_part)){
      ip_str.erase(0, ip_part.length() + 1);
    } else {
      return 0;
    }
  }

  std::cout << "Yes!" << std::endl;

}

bool check_dots_count(std::string ip_str){
  int dot_count = 0;
  for(int i = 0; i < ip_str.length(); i++){
    if(ip_str[i] == '.') dot_count++;
  }
 return (dot_count > 3)? false: true;
}

std::string get_ip_part(std::string ip){
  std::string ip_part = "";
  for(int i = 0; ip[i] != '.' && i < ip.length(); i++){
    ip_part += ip[i];
  }
  return ip_part;
} 

bool valid_ip_part(std::string ip_part){
  if(ip_part.length() == 0){
    std::cout << "No. Two dots in a row." << std::endl;
    return false;
  }

  for(int i = 0; i < ip_part.length(); i++){
    if(ip_part[i] >= '0' && ip_part[i] <= '9'){
      if((i > 0) && (ip_part[0] == '0')){
        std::cout << "No. Extra zeros." << std::endl;
        return false;
      }
    } else {
      std::cout << "NO. Invalid characters." << std::endl;
      return false;
    }    
  }

  int ip_int = std::stoi(ip_part.c_str());
 
  if (ip_int > 255){
    std::cout << "NO. Numbers greater than 255." << std::endl;
    return false;
  } 
  return true;
}

