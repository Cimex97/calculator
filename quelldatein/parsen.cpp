#include <iostream>
#include <string>
#include "../headerdatein/parsen.h"

int parsen(std::string rechnung){      //eingabe parsen

  struct rechenzeichen zeichen;
  std::cout << rechnung << std::endl;

  int posplus = rechnung.find(zeichen.plus);                           //Position der Rechenzeichen suchen
  int posminus = rechnung.find(zeichen.minus);
  int posmal = rechnung.find(zeichen.mal);
  int posgeteielt = rechnung.find(zeichen.geteielt);
  int posquadrat = rechnung.find(zeichen.quadrat);

  std::cout << "Position plus: " << posplus << std::endl                //Positionen der Rechenzeichen anzeigen(Funktioniert nur bei einem jeder sorte)
	    << "Position minus: " << posminus << std::endl
	    << "Position mal: " << posmal <<std::endl
	    << "Position geteielt: " << posgeteielt << std::endl
	    << "Position quadrat: " << posquadrat << std::endl;
  

  return ERFOLGREICH;
}


