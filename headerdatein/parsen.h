#ifndef __PARSEN_H___
#define __PARSEN_H__

#include <string>
#include <iostream>
#include <sstream>

#define ERFOLGREICH 100
#define SYNTAX_FEHLER 300

#define MAX_SIZE 60


struct werte {     //struct fuer die rechenzeichen
  char quadrat = '^';
  char mal = '*';
  char geteielt = '/';
  char plus = '+';
  char minus = '-';
  char klammerauf = '(';    //hinzugfuegt
  char klammerzu = ')';

  std::string zahlen[MAX_SIZE];
  std::string mathe[MAX_SIZE];
  std::stringstream ss[MAX_SIZE];
  int number[MAX_SIZE];
  
};

#endif

    /* string.h*/
