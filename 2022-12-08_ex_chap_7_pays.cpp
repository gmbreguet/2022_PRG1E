//---------------------------------------------------------
// Demo           : 2022-12-08_ex_chap_7_pays
// Fichier        : 2022-12-08_ex_chap_7_pays.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : exercices chap 7.3
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

//--------------------------------------------------
using ulong = unsigned long;

class Pays {
public:
   Pays(const string& nom, ulong nbreHabitants, ulong superficie);

   string getNom()            const;
   ulong  getNbreHabitants()  const;
   ulong  getSuperficie()     const;

   Pays& operator= (const Pays& autre);

private:
   const  string nom;
   ulong  nbreHabitants;
   ulong  superficie;
};

Pays::Pays(const string& nom, ulong nbreHabitants, ulong superficie) : nom(nom) {
//   this->nom            = nom;
   this->nbreHabitants  = nbreHabitants;
   this->superficie     = superficie;
}

//--------------------------------------------------
string Pays::getNom() const {
   return this->nom;
}

//--------------------------------------------------
ulong  Pays::getNbreHabitants() const {
   return this->nbreHabitants;
}

//--------------------------------------------------
ulong  Pays::getSuperficie() const {
   return this->superficie;
}

//--------------------------------------------------
Pays& Pays::operator= (const Pays& autre) {
   (string&) nom  = autre.nom;
   nbreHabitants  = autre.nbreHabitants;
   superficie     = autre.superficie;
   return *this;
}

//--------------------------------------------------
ostream& operator<< (ostream& os, const Pays& pays) {
   os << "nom              " << pays.getNom()           << endl;
   os << "nbre habitants   " << pays.getNbreHabitants() << endl;
   os << "superficie       " << pays.getSuperficie();
   return os;
}

using ListePays = vector<Pays>;

//--------------------------------------------------
ostream& operator<< (ostream& os, const ListePays& liste) {
   for (const Pays& pays : liste)
      os << pays << endl << endl;
   return os;
}

//--------------------------------------------------
bool compareSuperficie(const Pays& lhs, const Pays& rhs) {
   return lhs.getSuperficie() < rhs.getSuperficie();
}

//--------------------------------------------------
bool compareDensite(const Pays& lhs, const Pays& rhs) {
   return lhs.getNbreHabitants() / lhs.getSuperficie()
        < rhs.getNbreHabitants() / rhs.getSuperficie();
}

//--------------------------------------------------
int main () {

   Pays Suisse("Suisse",  8'698'000,  41'285);
   Pays France("France", 67'500'000, 643'801);
   Pays Italie("Italie", 59'070'000, 301'230);

   cout << Suisse << endl;
   cout << endl;

   cout << "autre pays <= Suisse" << endl;
   Pays autre("autre", 2, 3);
   autre = Suisse;
   cout << autre << endl;


   cout << "liste pays ..." << endl;
   ListePays liste = {Suisse, France, Italie};
   cout << liste << endl;
   cout << endl;

   cout << "plus grande superficie : ";
   cout << max_element(liste.begin(), liste.end(), compareSuperficie)->getNom();
   cout << endl;

//   cout << "trier les pays par densite " << endl;
//   cout << liste << endl;
//   sort(liste.begin(), liste.end(), compareDensite);
//   cout << liste << endl;

   return EXIT_SUCCESS;
}
