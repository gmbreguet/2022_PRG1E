//---------------------------------------------------------
// Demo           : 2022-11-14_demo
// Fichier        : 2022-11-14_demo.cpp
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

   string test = "bonjour";

   cout << test.substr(3, 2) << endl;
   cout << test.substr(3).substr(0, 2) << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

