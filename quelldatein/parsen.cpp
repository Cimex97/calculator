#include <iostream>
#include <string>
#include <sstream>
#include "../headerdatein/parsen.h"

#define MAX_SIZE 60

int parsen(std::string rechnung)
{                                                                         //eingabe parsen

  struct rechnug werte;
  

  int start = 0;
  int ende = 0;
  int count = 0;
  
  std::string endezeichen = "\n";
  std::string zahlen[MAX_SIZE];
  std::string mathe[MAX_SIZE];

  std::stringstream ss[MAX_SIZE];
  int number[MAX_SIZE];

  
  
  rechnung = rechnung + endezeichen;
  
  int leange = rechnung.length();
  
  std::cout << std::endl << "Laenge: " << leange << std::endl;
  
  for(int i=0;i<leange;i++){
    switch(rechnung.at(i))
      {
      case '+':
	ende = i - start;
       	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i; 
	
	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl
		  << count << std::endl;


	ss[count] << zahlen[count];
	ss[count] >> number[count];
   
	count = ++count;
	break;
      case '-':
	ende = i - start;
	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	ss[count] << zahlen[count];
	ss[count] >> number[count];
	

	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl;
	count = ++count;
	break;
      case '*':
	ende = i - start;
	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	ss[count] << zahlen[count];
	ss[count] >> number[count];
	
	
	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl;
	count = ++count;
	break;
      case '/':
	ende = i - start;
	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	ss[count] << zahlen[count];
	ss[count] >> number[count];
	
	
	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl;
	count = ++count;
	break;
      case '^':
	ende = i - start;
	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	ss[count] << zahlen[count];
	ss[count] >> number[count];
	
	
	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl;
	count = ++count;
	break;
      case '\n':
	ende = i - start;
	zahlen[count] = rechnung.substr(start, ende);
	mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	ss[count] << zahlen[count];
	ss[count] >> number[count];
	
	
	std::cout << zahlen[count] << std::endl
		  << mathe[count] << std::endl;
	count = ++count;
	break;
	
      default:
	if(rechnung.at(i) <= '9')
	  {
	    //std::cout << "eingabe ist eine Zahl" << std::endl;
	    break;
	  }
	  else
	    {
	      std::cout << "Syntax fehler!" << std::endl;
	      return SYNTAX_FEHLER;
	    }
      }
    
  }
    
  return ERFOLGREICH;
}


