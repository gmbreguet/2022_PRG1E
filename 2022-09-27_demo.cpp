//---------------------------------------------------------
// Demo           : 2022-09-27_demo
// Fichier        : 2022-09-27_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : Demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main () {

   int i = 1;

   cout << ++i << i << endl; // pré-incrémentation
//   i = i + 1;
//   cout << i;

   cout << i++ << i << endl; // post-incrémentation
//   int copie = i;
//   i = i + 1;
//   cout << copie;


   for (int i=0; i<10; ++i)
      cout << i << " ";

   return EXIT_SUCCESS;
}

//
//22
//23
