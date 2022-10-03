//---------------------------------------------------------
// Demo           : 2022-09-26_ex_1_4
// Fichier        : 2022-09-26_ex_1_4.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe PRG1B (ex 1.4)
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <limits>       // numeric_limits<streamsize>

using namespace std;

int main() {

   // variables de travail
   int      a, b;
   double   x, y;
   char     s;

   // justifier ce que vaut le buffer après CHAQUNE des instructions
   cout << "entrer des valeurs : ";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << endl;
   cout << "avant" << endl;

   cout << "votre saisie: ";
   cin >> a;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   cout << "apres" << endl;
   cin >> b;
   cout << "apres" << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cin >> x >> y;
   cout << "voulez-vous sauver [o/n] : ";
   cin >> s;
   cout << "sauver : " << s << endl;
   cin >> a;
   cin >> b;
   cin >> x;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}
