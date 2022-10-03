//---------------------------------------------------------
// Demo           : 2022-09-28_buffer
// Fichier        : 2022-09-28_buffer.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe PRG1B
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
   cin >> a;
   cin >> b;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << "avant" << endl;
   cin >> x >> y;


   cout << "voulez-vous sauver [o/n] : ";
   cout << "apres" << endl;
   cin >> s;
   cout << "sauver : " << s << endl;
   cin >> a;
   cin >> b;
   cin >> x;

   cout << "a : " << a << endl;
   cout << "b : " << b << endl;
   cout << "x : " << x << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}
