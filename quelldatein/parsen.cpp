#include <iostream>
#include <string>
#include <sstream>
#include "../headerdatein/parsen.h"


struct werte* parsen(std::string rechnung, struct werte* werte)
{                                                                         //eingabe parsen

  int start = 0;
  int ende = 0;
  int count = 0;
  
  std::string endezeichen = "\n";
  
  rechnung = rechnung + endezeichen;
  
  int leange = rechnung.length();
  
  for(int i=0;i<leange;i++){
    switch(rechnung.at(i))
      {
      case '+':
	ende = i - start;
       	werte->zahlen[count] = rechnung.substr(start, ende);
	werte->mathe[count] = rechnung.substr((start+ende),1);
	start = ++i; 
	
	werte->ss[count] << werte->zahlen[count];
	werte->ss[count] >> werte->number[count];
   
	count = ++count;
	break;
      case '-':
	ende = i - start;
	werte->zahlen[count] = rechnung.substr(start, ende);
	werte->mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	werte->ss[count] << werte->zahlen[count];
	werte->ss[count] >> werte->number[count];
	
	count = ++count;
	break;
      case '*':
	ende = i - start;
	werte->zahlen[count] = rechnung.substr(start, ende);
	werte->mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	werte->ss[count] << werte->zahlen[count];
	werte->ss[count] >> werte->number[count];
	
	count = ++count;
	break;
      case '/':
	ende = i - start;
	werte->zahlen[count] = rechnung.substr(start, ende);
	werte->mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	werte->ss[count] << werte->zahlen[count];
	werte->ss[count] >> werte->number[count];
	
	count = ++count;
	break;
      case '^':
	ende = i - start;
	werte->zahlen[count] = rechnung.substr(start, ende);
	werte->mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	werte->ss[count] << werte->zahlen[count];
	werte->ss[count] >> werte->number[count];
	
	count = ++count;
	break;
      case '\n':
	ende = i - start;
	werte->zahlen[count] = rechnung.substr(start, ende);
	werte->mathe[count] = rechnung.substr((start+ende),1);
	start = ++i;

	werte->ss[count] << werte->zahlen[count];
	werte->ss[count] >> werte->number[count];
	
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
	      return werte;
	    }
      }
    
  }

  return werte;
}


