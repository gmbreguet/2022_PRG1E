//---------------------------------------------------------
// Demo           : 2022-11-16_demo
// Fichier        : 2022-11-16_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <vector>       // cout et cin

using namespace std;

using Vecteur = vector<int>;

void afficher(const Vecteur& v) {
   cout << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         cout << ", ";
      cout << v[i];
   }
   cout << "]";
}

Vecteur concatVecteur(const Vecteur& v1, const Vecteur& v2) {

   Vecteur resultat = v1;
   afficher(resultat); cout << endl;

   cout << "size     : " << resultat.size()     << endl;
   cout << "capacity : " << resultat.capacity() << endl;

   resultat.reserve(v1.size() + v2.size());

   cout << "size     : " << resultat.size()     << endl;
   cout << "capacity : " << resultat.capacity() << endl;

   for (int val : v2)
      resultat.push_back(val);

   afficher(resultat); cout << endl;

   cout << resultat.size() << endl;

   return Vecteur();
}

int main() {

   const Vecteur v1 = {11, 12, 13, 14};
   const Vecteur v2 = {21, 22, 23, 24, 25, 26, 27};

   concatVecteur(v1, v2);

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

