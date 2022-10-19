//---------------------------------------------------------
// Demo           : 2022-10-05_demo
// Fichier        : 2022-10-05_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <string>       // cout et cin


using namespace std;

int main() {

   string str1 = "Hello a tous ";

//   cout <<         "chaine C" << endl;
//   cout << (void*) "chaine C" << endl;

   cout << str1 + "toto"      << endl;
//   cout << ("hello " + "toto"s)<< endl;
//   cout << "hello"s + "a" + "tous" << endl;

   str1[6] = 'A';
   cout << str1 + "toto"      << endl;

   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

