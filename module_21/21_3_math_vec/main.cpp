#include <iostream>
#include <cmath>
#include <string>

struct Vec{
  float x, y;

  Vec add (Vec B) const{
    Vec C;
    C.x = this->x + B.x;
    C.y = this->y + B.y;
    return C;
  };

  Vec substract (Vec B) const{
    Vec C;
    C.x = this->x - B.x;
    C.y = this->y - B.y;
    return C;
  };
   
  Vec scale (float k) const{
    Vec vec;
    vec.x = this->x * k;
    vec.y = this->y * k;
    return vec;
  };

  float length () const{
    float length  = sqrt(this->x * this->x + this->y * this->y);
    return length;
  };

  Vec normalize() const{
    float inv_length = 1.0f / this->length();
    return (*this).scale(inv_length);
  }
};

void vec_print(Vec vec){
  std::cout << "(" << vec.x << ", " << vec.y << ")";
};

int main() {
  std::cout << "21.3 Math vector\n";

  Vec A, B;
  std::cout << "Enter vector coordinates A (x,y): ";
  std::cin >> A.x >> A.y;
  std::cout << "Enter vector coordinates B (x,y): ";
  std::cin >> B.x >> B.y;
  
  std::cout << "Choose the operation: " << std::endl;
  std::cout << "'add' - A + B" << std::endl;
  std::cout << "'substract' - A - B" << std::endl;
  std::cout << "'scale' - A * k" << std::endl;
  std::cout << "'length' - |A|" << std::endl;
  std::cout << "'normalize' - ||A||" << std::endl;

  std::string operation;
  std::cin >> operation;

  if(operation == "add") {
    Vec C = A.add(B);
    std::cout << "A";
    vec_print(A); 
    std::cout << " + ";
    std::cout << "B";
    vec_print(B);  
    std::cout << " = ";
    std::cout << "C";
    vec_print(C); 
    return 0;
  } else if(operation == "substract"){
    Vec C = A.substract(B);
    std::cout << "A";
    vec_print(A); 
    std::cout << " - ";
    std::cout << "B";
    vec_print(B);  
    std::cout << " = ";
    std::cout << "C";
    vec_print(C);  
    return 0;
  } else if(operation == "scale"){
    std::cout << "Enter the scalar: ";
    float k;
    std::cin >> k;
    std::cout << "A * " << k << " = A";
    vec_print(A.scale(k));  
    std::cout << std::endl << "B * " << k << " = B";
    vec_print(B.scale(k));  
    return 0;
  } else if(operation == "length"){
    std::cout << "|A|";
    std::cout << " = " << A.length();
    std::cout << std::endl;
    std::cout << "|B|";
    std::cout << " = " << B.length();
    return 0;
  } else if(operation == "normalize"){
    std::cout << "A";
    vec_print(A.normalize()); 
    std::cout << std::endl;
    std::cout << "B";
    vec_print(B.normalize()); 
    return 0;
  } else {
    std::cout << "Unknown operation" << std::endl;
  }
  
  return 0;
};



