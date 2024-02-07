#include <iostream>
#include <string>
#include "eleve.h"
using namespace std;
 char* eleve::mention(float moyenne)
 {
     if(10 <= moyenne && moyenne < 12)
     {
         return "passable";
     }
 }
  eleve::eleve()
 {

 }
