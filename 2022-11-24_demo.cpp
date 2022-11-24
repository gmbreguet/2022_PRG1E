//---------------------------------------------------------
// Demo           : 2022-11-24_demo
// Fichier        : 2022-11-24_demo.cpp
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

using Data    = int;
using Ligne   = vector<Data>;
using Matrice = vector<Ligne>;

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

//------------------------------------------
int plus2(int valeur) {
   return valeur + 2;
}

//------------------------------------------
// parcourir
void parcourir(Ligne& ligne, int(*fct)(int) ) {
   for (Ligne::size_type i=0; i<ligne.size(); ++i)
      ligne[i] = fct(ligne[i]);
}

//------------------------------------------
int main() {

   Ligne ligne1 = {11, 12, 13, 14};

   cout << ligne1 << endl;
   parcourir(ligne1, plus2);
   cout << endl;
   cout << ligne1 << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

