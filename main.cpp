#include <iostream>
#include <stdexcept>

#include <geometry.h>

using namespace std;

int main(){


       cout << " ------  POLYGONS" << endl;
 
   //Polygon pol()  // can't, abstract class
 
   cout << "Polygon::getNumPolygons(): " << Polygon::getNumPolygons() << endl;
 
   Polygon* ppol1;  // yes
   Polygon* ppol2; 
 
   Rectangle rect(Point(11,0), Point(22,50));
  
   cout << "Polygon::getNumPolygons(): " << Polygon::getNumPolygons() << endl;
 
   ppol1 = &rect;
   cout << "rect getNumSides: " << ppol1->getNumSides() << endl;
   cout << "rect getPoints(): " << ppol1->getPoints()->as_string() << endl;
   cout << "rect area: " << ppol1->area() << endl;
  
   //ppol1->getPoints()->get(0)->set_x(100);  // shoudln't compile!
  
   Rectangle rect2 = rect;
 
   // rect2.getPoints()->get(0).set_x(100);  // shoudln't compile!
 
   {
       cout << "---- Rectangle inside a block" << endl;
       Rectangle rect3(50,60,70,80);
   } // gets destroyed here
 
   cout << "----  Triangle" << endl;
   Triangle trng(Point(0,0), Point(0,10), Point(20,0));
 
   cout << "Polygon::getNumPolygons(): " << Polygon::getNumPolygons() << endl;
  
   ppol2 = &trng;
   cout << "triangle getNumSides: " << ppol2->getNumSides() << endl;
   cout << "triangle getPoints(): " << ppol2->getPoints()->as_string() << endl;
   cout << "triangle area: " << ppol2->area() << endl;   
};
