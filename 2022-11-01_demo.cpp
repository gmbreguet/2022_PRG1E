//---------------------------------------------------------
// Demo           : 2022-11-01_demo
// Fichier        : 2022-11-01_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <string>       // cout et cin


using namespace std;

int plusAB(int a, int b) {
   return a + b;
}

int plusAB(int a, int b, int c = 0) {
   return a + b + c;
}

double plusAB(double a, double b) {
   return a + b;
}

int main() {

   int      resultatInt    = plusAB(1, 2);
   double   resultatDouble = plusAB(1.2, 2.6);
   plusAB(1.2, 2.6);

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

