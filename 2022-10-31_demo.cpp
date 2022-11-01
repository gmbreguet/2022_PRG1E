//---------------------------------------------------------
// Demo           : 2022-10-20_demo
// Fichier        : 2022-10-20_demo.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <string>       // cout et cin


using namespace std;

int f(int a, int b) {
   return a + b;
}

constexpr int g(int a, int b) {
   return ++a + b;
}

int main() {

   //            01234567890
   string msg = "Hello";

   cout << msg       << endl;
   cout << msg[1]    << endl;
   cout << msg.at(1) << endl;

   msg[1]    = 'E';
   msg.at(1) = 'E';

   cout << msg[1]    << endl;
   cout << msg.at(1) << endl;

//   cout << msg[7]    << endl;
//   cout << msg.at(7) << endl;


   int       a = 1, b = 2;   
   const int A = 1, B = 2;
   constexpr int C1 = g(A, B);


   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}

