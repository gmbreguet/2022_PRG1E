//---------------------------------------------------------
// Demo           : 2022-11-08_demo
// Fichier        : 2022-11-08_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <string>       // cout et cin


using namespace std;

int tabGlobal[] = {10, 11, 12, 13, 14, 15};

void afficher(int tab[], size_t taille) {
//void afficher(const int* tab, size_t taille) {
   //   cout << "sizeof(tab) : " << sizeof(tab) << endl;
   //   cout << "sizeof(tab) : " << sizeof(int*) << endl;
   //   const int TAILLE = sizeof(tab) / sizeof(tab[0]);
   //   cout << "TAILLE      : " << TAILLE << endl;

   for(size_t i=0; i<taille; ++i)

      cout << tab[i] << " ";
   cout << endl;

   //    /!\ tab n'est PAS un tableau
   //   cout << "boucle for ( : ) : ";
   //   for (int i : tab)
   //      cout << i;
   //   cout << endl;

//   cout << "boucle for ( : ) : ";
//   for (int i : tabGlobal)
//      cout << i;

   cout << endl;
}

// /!\ tab est local, il va disparaitre
// on retourne un ptr sur une mémoire rendue
int* creerTableau(size_t taille) {
   int tab[taille];
   return tab;
}

int main() {

   int test;
   const int tab1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   const int tab2[] = {0, 1, 2, 3, 4};

   const int TAILLE1 = sizeof(tab1) / sizeof(tab1[0]);
   const int TAILLE2 = sizeof(tab2) / sizeof(tab2[0]);

   cout << "tab1         : " << tab1     << endl;
   cout << "tab1[0]      : " << tab1[0]  << endl;
   cout << "&tab1[0]     : " << &tab1[0] << endl;

   cout << "TAILLE1      : " << TAILLE1 << endl;
   cout << "sizeof(tab1) : " << sizeof(tab1) << endl;

   for(int i=0; i<TAILLE1; ++i)
      cout << tab1[i] << " ";
   cout << endl;

   cout << "boucle for ( : ) : ";
   for (int i : tab1)
      cout << i;

   cout << "boucle for ( : ) : ";
   for (int i : tabGlobal)
      cout << i;

   cout << endl;
   afficher(tab1, TAILLE1);
   afficher(tab2, TAILLE2);

   cout << "tab1[5]      : " << tab1[5]     << endl;
   cout << "*(tab1+5)    : " << *(tab1+5)   << endl;
   cout << "*(5+tab1)    : " << *(5+tab1)   << endl;
   cout << "5[tab1]      : " << 5[tab1]     << endl;

   cout << endl;

   afficher(tab1+8, 3);

   cout << endl;
   cout << "ptr sur tableau : ";
   const int* ptr = tab1+3;
   afficher(ptr, 3);
   afficher(ptr+3, 3);
   afficher(ptr-3, 3);
   cout << ptr[ 3] << endl; // *ptr+3
   cout << ptr[-3] << endl; // *ptr+3

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

