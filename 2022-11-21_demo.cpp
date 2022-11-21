//---------------------------------------------------------
// Demo           : 2022-11-21_demo
// Fichier        : 2022-11-21_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <vector>
#include <array>

using namespace std;

using Data    = long double;
using Ligne   = vector<Data>;
using Matrice = vector<Ligne>;

using Array10Int = array<int, 10>;

using Coord = array<Data, 3>;

//------------------------------------------
ostream& operator<< (ostream& os, const Ligne& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         os << ", ";
      os << v[i];
   }
   return os << "]";
}

//------------------------------------------
ostream& operator<< (ostream& os, const Matrice& m) {
   for (const Ligne& ligne : m)
      os << ligne << endl;
   return os;
}

void put(const array<int, 10>& tab) {
   for (int i : tab)
      cout << i << endl;
}

int main() {
   const Ligne ligne1 = {11, 12, 13, 14};
   cout << ligne1 << endl;
   cout << endl;

   const Matrice mat1 = {ligne1, ligne1, ligne1};
   cout << mat1 << endl;

   const Matrice mat2 = { {1, 2},
                          {3},
                          {6, 7, 8, 9, 10}};
   cout << mat2 << endl;


   Array10Int test;
   put(test);

   array<int, 12> test2;
   put(test2);

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

