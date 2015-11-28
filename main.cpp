#include <iostream>
#include <string>
#include "string.h"

int parsen(std::string rechnung);

int main(){
  std::string rechnung;
    
  std::cout << "Rechnung eingeben: " << std::endl;
  std::cin >> rechnung;

  parsen(rechnung);
  
  return 0;
}


