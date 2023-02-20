#include <iostream>
#include <map>
#include <string>
#include <sstream>

bool is_phone_number(std::string number);

void search_name(std::map<std::string, std::string>& myMap, std::string key);

void search_number(std::map<std::string, std::string>& myMap, std::string value);

void add(std::map<std::string, std::string>& myMap, std::string key, std::string value);

int main() {
  std::cout << "22.1 Phonebook\n";

  std::map<std::string, std::string> Phonebook = {{"69-70-30", "Ivanov" },
                                                  {"70_70-70", "S.J.Connor"}};

  std::string request, phone_number = "", name = "";
  std::cout << "Enter your request: ";
  std::getline(std::cin, request);
  std::stringstream data(request);
  data >> phone_number >> name;

  if(!is_phone_number(phone_number)){
    name = phone_number;
    search_number(Phonebook, name);
  } else if(name == ""){
    search_name(Phonebook, phone_number);
  } else {
      add(Phonebook, phone_number, name);
  }
}

//поиск по ключу
void search_name(std::map<std::string, std::string>& myMap, std::string key){
  std::map<std::string, std::string>::iterator it = myMap.find(key);
  if(it != myMap.end()){//или nullptr?
    std::cout << it->second << std::endl;
  } else { // а если ничего не найдено?
    std::cout <<  "There is no user with this phone number" << std::endl;
  }
}
//поиск по значению
void search_number(std::map<std::string, std::string>& myMap, std::string value){
  for(std::map<std::string, std::string>::iterator it = myMap.begin(); it!=       myMap.end(); ++it){
    if(it->second == value){
      std::cout << it->first << " ";//можно еще возвращать сам итератор
    } else {// а если ничего не найдено?
       std::cout << "There is no user with this name" << std::endl;
    }
  }
}

//вставка в map
void add(std::map<std::string, std::string>& myMap, std::string key, std::string value){
   myMap.insert(std::pair<std::string, std::string>(key, value));
  //нужно проверить, произошла ли вставка
}

bool is_phone_number_hard(std::string number){ //"00-00-00"
  if (number.length() != 8 ) return false;
  for(int i = 0; i < number.length(); i++){
    if((i == 3 || i == 6) && number[i] != '-') return false;
    if(number[i] < '0' || number[i] > '9') return false;
  }
  return true;
}

bool is_phone_number_light(std::string number){
  for(int i = 0; i < number.length(); i++){
    if((number[i] >= '0' && number[i] <= '9') || number[i] == '-') return true;
  }
  return false;
}