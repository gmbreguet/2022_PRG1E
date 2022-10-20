//---------------------------------------------------------
// Demo           : 2022-10-20_demo
// Fichier        : 2022-10-20_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin


using namespace std;

int main() {

   int   entier      = 17;
   int&  refEntier   = entier;

   cout << "entier            : "   << entier            << endl;
   cout << "refEntier         : "   << refEntier         << endl;

   entier = 12;
   cout << "entier            : "   << entier            << endl;
   cout << "refEntier         : "   << refEntier         << endl;

   refEntier = 19;
   cout << "entier            : "   << entier            << endl;
   cout << "refEntier         : "   << refEntier         << endl;

   cout << "taille entier     : "   << sizeof(entier)    << endl;
   cout << "taille refEntier  : "   << sizeof(refEntier) << endl;

   int* ptrEntier = &entier;
   cout << "entier            : "   << entier            << endl;
   cout << "adr entier        : "   << &entier           << endl;
   cout << "ptrEntier         : "   << ptrEntier         << endl;
   cout << "adr ptrEntier     : "   << &ptrEntier        << endl;
   cout << "valeur poiontee   : "   << *ptrEntier        << endl;

   entier = 21;
   cout << "entier            : "   << entier            << endl;
   cout << "adr entier        : "   << &entier           << endl;
   cout << "ptrEntier         : "   << ptrEntier         << endl;
   cout << "adr ptrEntier     : "   << &ptrEntier        << endl;
   cout << "valeur poiontee   : "   << *ptrEntier        << endl;

   *ptrEntier = 42;
   cout << "entier            : "   << entier            << endl;
   cout << "adr entier        : "   << &entier           << endl;
   cout << "ptrEntier         : "   << ptrEntier         << endl;
   cout << "adr ptrEntier     : "   << &ptrEntier        << endl;
   cout << "valeur poiontee   : "   << *ptrEntier        << endl;

   cout << "taille entier     : "   << sizeof(entier)    << endl;
   cout << "taille ptrEntier  : "   << sizeof(ptrEntier) << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

