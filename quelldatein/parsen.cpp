#include <iostream>
#include <string>
#include "../headerdatein/parsen.h"

int parsen(std::string rechnung){      //eingabe parsen

  struct rechenzeichen zeichen;
  
  std::cout << rechnung << std::endl;
  int laenge = rechnung.size();
  std::cout << "Laenge der Rechnung " << laenge << std::endl;
  return ERFOLGREICH;
}
