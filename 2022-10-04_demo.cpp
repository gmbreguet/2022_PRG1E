//---------------------------------------------------------
// Demo           : 2022-10-04_demo
// Fichier        : 2022-10-04_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin

int valeur = 12;

// une fonction ...

using namespace std;

int main() {

   int flag   = 1;
   int valeur = 8;

   if (flag == 1)

      if (valeur > 10)
         cout << "plus grande que 10" << endl;

      else if (valeur == 10)
            cout << "valeur = 10" << endl;

      else
            cout << "valeur < 10" << endl;


   if (valeur > 12)
      cout << "oui"
   else
      cout << "1";
   else           // n'appartient à aucun if => erreur de compilation
      cout << "1";

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

