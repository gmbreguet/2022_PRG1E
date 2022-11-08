//---------------------------------------------------------
// Demo           : 2022-11-08_ex_5.6
// Fichier        : 2022-11-08_ex_5.6.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : exercice 5.6
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <string>       // cout et cin


using namespace std;

void echanger(int& gauche, int& droite) {
   int tmp = gauche;
   gauche = droite;
   droite = tmp;
}

bool echangerPremierDernier(int tab[], size_t taille) {
   if (taille) {
      echanger(tab[0], tab[taille-1]);
      return true;
   }
   return false;
}

void afficher(const int tab[], size_t taille) {
   cout << "[";
   for (size_t i=0; i<taille; ++i) {
      if (i != 0)
         cout << ", ";
      cout << tab[i];
   }
   cout << "]" << endl;
}

int min(const int tab[], size_t taille) {
   int valMin = tab[0];
   for (size_t i=1; i<taille; ++i) {
      valMin = valMin < tab[i] ? valMin : tab[i];
   }
   return valMin;
}

int& min(int tab[], size_t taille) {
   size_t iMin = 0;
   for (size_t i=1; i<taille; ++i) {
      if (tab[i] < tab[iMin])
         iMin = i;
   }
   return tab[iMin];
}

int main() {
   int tab[] = {0, 1, 2, 3, -4, 5, 6, 7, 8, 9};
   const size_t TAILLE = sizeof(tab) / sizeof(tab[0]);

   afficher(tab, TAILLE);
   echangerPremierDernier(tab, TAILLE);
   afficher(tab, TAILLE);

   int tab1[1] = {0};
   afficher(tab1, 1);
   echangerPremierDernier(tab1, 1);
   afficher(tab1, 1);

   int tab2[0] = {};
   afficher(tab2, 0);
   echangerPremierDernier(tab2, 0);
   afficher(tab2, 0);

   cout << "min : " << min(tab, TAILLE) << endl;
   afficher(tab, TAILLE);
   min(tab, TAILLE) = 100;
   afficher(tab, TAILLE);


   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

