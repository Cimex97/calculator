#include <iostream>
#include <string>
#include "../headerdatein/parsen.h"

int parsen(std::string rechnung){      //eingabe parsen

  struct rechenzeichen zeichen;
  
  int posplus = rechnung.find(zeichen.plus);                           //Position der Rechenzeichen suchen
  int posminus = rechnung.find(zeichen.minus);
  int posmal = rechnung.find(zeichen.mal);
  int posgeteielt = rechnung.find(zeichen.geteielt);
  int posquadrat = rechnung.find(zeichen.quadrat);
  int leange = rechnung.length();
  

  std::cout << std::endl << "Laenge: " << leange << std::endl;
  
  for(int i=0;i<leange;i++){
    std::cout << "Pointer vom String: " << rechnung.at(i) << std::endl;  //rechnung.at() gibt den string buchstabe fuer buchstabe aus
    switch(rechnung.at(i))
      {
      case '+': std::cout << "Ein Plus wurde gelesen" << std::endl << std::endl;
	break;
      case '-': std::cout << "Ein Minus wurde gelesen" << std::endl <<std::endl;
	break;
      }
  }
  

  return ERFOLGREICH;
}


