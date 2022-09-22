//---------------------------------------------------------
// Demo           : 2022-09-22_base
// Fichier        : 2022-09-22_base.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : Demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>

using namespace std;

int main () {

   const int MAX1  = 12;
   int const MAX2  = 12;

   int coordX      = 2,    // initialisation
       coordY      = 3;

   int bleu      = 2;
   int monEntier = 4.9;

   bleu = 5;            // affectation
   bleu = coordX + coordY;
   bleu = MAX + 2 * bleu;

   cout << "mon entier : " << monEntier << endl;


   return 0;
}
