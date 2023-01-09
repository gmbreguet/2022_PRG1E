//---------------------------------------------------------
// Demo           : 2023-01-09
// Fichier        : 2023-01-09.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

//--------------------------------------------------
ostream& operator<< (ostream& os, const vector<int>& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         os << ", ";
      os << v[i];
   }
   return os << "]";
}

//--------------------------------------------------
int main () {
   const vector<int> vi = {1, 2, 3, 4, 5};
   cout << vi << endl;

   cout << endl;
   return EXIT_SUCCESS;
}
