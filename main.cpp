#include <iostream>
#include <string>

#define ERFOLGREICH 100

int string(std::string rechnung);

int main(){
  std::string rechnung;
    
  std::cout << "Rechnung eingeben: " << std::endl;
  std::cin >> rechnung;

  string(rechnung);
  
  return 0;
}


int string(std::string rechnung){

  std::cout << rechnung << std::endl;
  int laenge = rechnung.size();
  std::cout << "Laenge der Rechnung " << laenge << std::endl;
  return ERFOLGREICH;
}
