#include <iostream>
#include <string>
#include "../headerdatein/parsen.h"

int parsen(std::string rechnung);

void wait()
{
  std::cin.clear();
  std::cin.ignore(std::cin.rdbuf()->in_avail());
  std::cin.get();
}

int main(){
  std::string rechnung;
    
  std::cout << "Rechnung eingeben: " << std::endl;
  std::cin >> rechnung;

  parsen(rechnung);
  
  wait();
  return 0;
}


