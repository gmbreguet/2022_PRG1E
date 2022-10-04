//---------------------------------------------------------
// Demo           : 2022-10-03_saisie_char
// Fichier        : 2022-10-03_saisie_char.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : saisie de char en valeurs numériques
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin

using namespace std;
int main() {

   // variable de travail
   char  c;

   // saisie
   cout << "entrer un caractère : ";
   cin >> c;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   // afficher la saisie
   cout << endl;
   cout << "valeur saisie"       << endl;
   cout << "car c  : " << c      << endl
        << "int(c) : " << int(c) << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

//      entrer un caractère : 1
//
//      valeur saisie
//      car c  : 1
//      int(c) : 49
