//---------------------------------------------------------
// Demo           : 2022-12-08_ex_chap_7
// Fichier        : 2022-12-08_ex_chap_7.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : exercices chap 7.1 et 7.2
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//--------------------------------------------------
class Point {
public:
   Point ();
   Point (double x, double y);

   void translater(double dx, double dy);

   double getX() const;
   double getY() const;

   string to_string() const;

private:
   double x;
   double y;
};


//--------------------------------------------------
ostream& operator<< (ostream& os, const Point& point) {
//   os << "(" << point.getX() << " / " << point.getX() << ")";
//   return os;
   return os << point.to_string();
}

//--------------------------------------------------
Point::Point () {
   cout << "constructeur ..." << endl;
   x = y = 0.0;
}

//--------------------------------------------------
Point::Point (double x, double y) {
   (*this).x = x;
   this->y = y;
}

//--------------------------------------------------
void Point::translater(double dx, double dy) {
   x += dx;
   y += dy;
}

//--------------------------------------------------
double Point::getX() const {
   return x;
}

//--------------------------------------------------
double Point::getY() const {
   return y;
}

//--------------------------------------------------
string Point::to_string() const {
   return "(" + ::to_string(x) + " / " + ::to_string(y) + ")";
}

//--------------------------------------------------
int main () {

   Point point(1.0, 2.0);
   cout << point << endl;

   point.translater(1.0, 2.0);
   cout << point << endl;

   //-----------------------------------------------
   vector<Point> collectionPoints(3);

   cout << endl;
   return EXIT_SUCCESS;
}
