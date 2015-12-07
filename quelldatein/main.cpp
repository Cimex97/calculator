#include <iostream>
#include <string>
#include <sstream>
#include "../headerdatein/parsen.h"

struct werte* parsen(std::string rechnung, struct werte* werte);

void wait()
{
  std::cin.clear();
  std::cin.ignore(std::cin.rdbuf()->in_avail());
  std::cin.get();
}



int main(){
  std::string rechnung;

  struct werte werte;
  struct werte* zeiger = &werte;
  std::cout << "Rechnung eingeben: " << std::endl;
  std::cin >> rechnung;
  zeiger = parsen(rechnung, zeiger);
  
  wait();
  return 0;
}


