//---------------------------------------------------------
// Demo           : 2022-10-17_demo
// Fichier        : 2022-10-17_demo.cpp
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

   int valeur;
//
//   do {
//      cout << "saisie [0-10] : ";
//      cin  >> valeur;
//   } while (valeur > 10);

   do {
      cout << "saisie : ";
      cin  >> valeur;
      cout << valeur << " ";
   } while (valeur < 100);


   cin.get();

#define EVER ;;
   for (EVER)
      cout << ".";



   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

