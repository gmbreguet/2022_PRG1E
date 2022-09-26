//---------------------------------------------------------
// Demo           : 2022-09-26_ex_1_4
// Fichier        : 2022-09-26_ex_1_4.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe PRG1B (ex 1.4)
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>        // entrées-sorties
#include <cstdlib>         // EXIT_SUCCESS
#include <string>          // EXIT_SUCCESS

using namespace std;

int main () {

   // déclarations
   const int ANNEE = 2022;

   string prenom;
   int    age;
   int    anneeNaissance;

   // saisie du prenom
   cout << "prenom      : ";
   getline (cin, prenom);

   // saisie de l'age
   cout << "age         : ";
   cin  >> age;

   // calculer l'année de naissance
   anneeNaissance = ANNEE - age;

   // afficher le résultat
   cout << endl;
//   cout << "prenom      : " << prenom           << endl;
//   cout << "age         : " << age              << endl;
//   cout << "naissance   : " << anneeNaissance   << endl;

   cout << "Bonjour " << prenom << endl;
   cout << "Vous avez " << age << " ans et vous êtes ne(e) en " << anneeNaissance << endl;
   return EXIT_SUCCESS;
}
