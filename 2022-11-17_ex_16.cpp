//---------------------------------------------------------
// Demo           : 2022-11-17_demo
// Fichier        : 2022-11-17_demo.cpp
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

//------------------------------------------
void afficher(const Vecteur& v) {
   cout << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         cout << ", ";
      cout << v[i];
   }
   cout << "]";
}

//------------------------------------------
ostream& operator<< (ostream& os, const Vecteur& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         os << ", ";
      os << v[i];
   }
   os << "]";
   return os;
}

//------------------------------------------
Vecteur concatVecteur(const Vecteur& gauche, const Vecteur& droite) {

//   Vecteur resultat = gauche;
////   resultat.resize(gauche.size() + droite.size());
//   afficher(resultat); cout << endl;
//
//   resultat.reserve(gauche.size() + droite.size());
////   for (size_t i=0; i<droite.size(); ++i)
////      resultat.push_back(droite[i]);
//
//   afficher(resultat); cout << endl;


   Vecteur resultat;
   resultat.reserve( gauche.size() + droite.size() );

   resultat.insert(resultat.begin(), gauche.begin(), gauche.end());
   cout << resultat << endl;

   resultat.insert(resultat.end(), droite.begin(), droite.end());
   cout << resultat << endl;

//   resultat.insert( resultat.insert(resultat.begin(), droite.begin(), droite.end()),
//                    gauche.begin(), gauche.end());
//   afficher(resultat); cout << endl;


   return resultat;
}

int main() {

   const Vecteur v1 = {11, 12, 13, 14};
   const Vecteur v2 = {21, 22, 23, 24, 25, 26, 27};

   concatVecteur(v1, v2);

   cout << v1 << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

