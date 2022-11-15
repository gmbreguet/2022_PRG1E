//---------------------------------------------------------
// Demo           : 2022-11-15_demo
// Fichier        : 2022-11-15_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <vector>       // cout et cin
#include <string>       // cout et cin


using namespace std;



int main() {

   const vector<int> v1 = {1, 2, 3, 4};
   const vector<int> v2 = {1, 2, 3, 4};

//   vector<string> v = {"un", "deux", "trois"};
//   vector<string>::const_iterator it = v.begin();
//
//   // const empeche l'itérateur de changer
//   // mais il a un droit RW sur la valeur
//   const auto cst_it = v.begin();
//   // ++cst_it;
//   *cst_it = "oops";
//
//   for (const string& valeur : v)
//      cout << valeur << " ";
//   cout << endl;
//
//   for (vector<string>::const_reverse_iterator it = v.crbegin() + 3; it != v.crend(); --it)
//      cout << *it << " ";

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

