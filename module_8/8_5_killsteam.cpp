#include <iostream>
#include <cmath>

int main() {
  std::cout << "5. Steam killer\n";

  float sizeMb, speedMbs, downloaded = .0f;
  int  sec = 0;
  std::cout << "Enter download size: ";
  std::cin >> sizeMb;
  std::cout << "Enter speed of your connection: ";
  std::cin >> speedMbs;

  if (sizeMb < 0 || speedMbs < 0){
    std::cout << "Error. Download size and connection speed cannot be less than 0. Try again\n";
  } else {
    while (downloaded < sizeMb){
    downloaded += speedMbs;
    sec++;
    std::cout << sec << " seconds have passed. ";

    if(downloaded > sizeMb) {
      downloaded = sizeMb;
    }
    float downloadedInPercent = downloaded/sizeMb*100.0f;
    
    std::cout << "Downloaded " << downloaded << " of " << sizeMb << " Mb (" << floor(downloadedInPercent) << "%)\n";
    }
  } 
}
