//---------------------------------------------------------
// Demo           : 2022-10-05_demo
// Fichier        : 2022-10-05_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <string>       // cout et cin


using namespace std;

int main() {

   int i = 12;

   if (i>10)
      cout << "plus grand" << endl;
   else
      cout << "plus petit" << endl;

   int a = 12;
   int b =  5;
   int c = 15;
   int minimum;

   if (a > b)
      minimum = b;
   else
      minimum = a;

         //  question ? vrai : faux
   minimum = a < b    ?  a   :  b;

   minimum = a < b ? a < c ? a : c : b < c ? b : c;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

