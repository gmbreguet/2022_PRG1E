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
template<typename T>
ostream& operator<< (ostream& os, const vector<T>& v);

//--------------------------------------------------
template<typename T, int taille>
void afficher (const array<T, taille>& a);

//--------------------------------------------------
template<typename T>
T Plus1(T s);

//--------------------------------------------------
template<typename T, int taille, typename Fct>
void Parcourir(array<T, taille>& a, Fct fct) {
   for (size_t i=0; i<a.size(); ++i) {
      a[i] = fct(a[i]);
   }
}

//--------------------------------------------------
template<typename R, typename T, typename U>
R Plus(T a, U b) {
   return a + b;
}

//--------------------------------------------------
template <typename T>
void fct(T a, T b) {
   a + b;
}

//--------------------------------------------------
int main () {

   cout << Plus<int, int, int>(1, 2.3);
   cout << Plus<int>(1, 2.3);


   const vector<int> vi = {1, 2, 3, 4, 5};
   cout << vi << endl;

   const vector<double> vd = {1, 2, 3, 4, 5};
   cout << vd << endl;

   const array<int, 10> a10 = {1, 2, 3, 4, 5};
   afficher<int, 10>(a10); cout << endl;

   array<short, 20> a20 = {1, 2, 3, 4, 5};
   afficher<short, 20>(a20); cout << endl;

   for_each(a20.begin(), a20.end(), Plus1<short>);
   afficher<short, 20>(a20); cout << endl;

   Parcourir<short, 20>(a20, Plus1<short>);
   afficher<short, 20>(a20); cout << endl;

   //fct(2, 3.3);    // T par déduction mais de type différent !!
   fct<int>(2, 3.3); // explicitement choisi à int => 3.3 sera converti

   return EXIT_SUCCESS;
}

//--------------------------------------------------
template<typename T>
ostream& operator<< (ostream& os, const vector<T>& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         os << ", ";
      os << v[i];
   }
   return os << "]";
}

//--------------------------------------------------
template<typename T, int taille>
void afficher (const array<T, taille>& a) {
   cout << "[";
   for (size_t i=0; i<a.size(); ++i) {
      if (i)
         cout << ", ";
      cout << a[i];
   }
}

//--------------------------------------------------
template<typename T>
T Plus1(T s) {
   return s + 1;
}
