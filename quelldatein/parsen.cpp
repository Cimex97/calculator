#include <iostream>
#include <string>
#include "../headerdatein/parsen.h"

#define MAX_SIZE 60

int parsen(std::string rechnung)
{                                                                         //eingabe parsen

  struct rechenzeichen zeichen;
  
  /*  int posplus = rechnung.find(zeichen.plus);                           //Position der Rechenzeichen suchen
      int posminus = rechnung.find(zeichen.minus);
      int posmal = rechnung.find(zeichen.mal);
      int posgeteielt = rechnung.find(zeichen.geteielt);
      int posquadrat = rechnung.find(zeichen.quadrat);*/
  int leange = rechnung.length();
  int start = 0;
  int ende = 0;
  int count = 0; 
  std::string zahlen[MAX_SIZE];
  std::string mathe[MAX_SIZE];
  
  std::cout << std::endl << "Laenge: " << leange << std::endl;
  
  for(int i=0;i<leange;i++){
    switch(rechnung.at(i))
      {
      case '+':
	ende = i - start;
	//std::cout << rechnung.substr(start, ende) <<"   start: " << start << "    i: " << i << std::endl ;
	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;
	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl;
	count = ++count;
	
	break;
      case '-': std::cout << "Ein Minus wurde gelesen" << std::endl <<std::endl;
	break;
      }
  }
  

  return ERFOLGREICH;
}


