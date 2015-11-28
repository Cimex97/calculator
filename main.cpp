#include <iostream>
#include <string>
#include "string.h"

int parsen(std::string rechnung);

void wait()
{
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
}

int main(){
  std::string rechnung;
    
  std::cout << "Rechnung eingeben: " << std::endl;
  std::cin >> rechnung;

  parsen(rechnung);
  
  wait();
  return 0;
}


