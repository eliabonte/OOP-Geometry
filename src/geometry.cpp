
#include "geometry.h"
#include <cmath>
#include <stdexcept> 
#include <iostream>

using namespace std;    

Point::Point(int x , int y ): x(x), y(y) {};
                            
int Point::get_x() const{
    return this->x;
}


int Point::get_y() const{
    return this->y;
}

void Point::set_x(const int x){
    this->x=x;
}

void Point::set_y(const int y){
    this->y=y;
}

string Point::as_string() const{
    return "("+to_string(this->x)+","+to_string(this->y)+")";
} 



PointArray::PointArray(){
    this->arr = new Point [0];
    this->length=0; 
}

PointArray::PointArray(const Point points[], const int size){
    if(size<0){
        throw invalid_argument("Negative size!!");
    }

    this->length=size; 
    this->arr = new Point[size];
    for(int i=0;i<size;i++){
        this->arr[i] = points[i];
    }      
}

PointArray::PointArray(const PointArray& pv):PointArray(pv.arr,pv.length){
    cout<<"DEBUG: copy constructor"<<endl;
}

PointArray::~PointArray(){
    cout<<"DEBUG: PointArray destructor"<<endl;
    delete [] this->arr;
}

void PointArray::resize(int n){
    if(n<0){
        throw invalid_argument("New size is negative! "+to_string(n));
    }
    cout<<"DEBUG: resizing from "<<to_string(this->length)<<" to "<<to_string(n)<<endl;
    Point* new_arr = new Point[n];
    for(int i=0;i<min(n,this->length);i++){
        new_arr[i] = this->arr[i];
    }
    delete [] this->arr;

    this->arr = new_arr;
    this->length = n;
}

string PointArray::as_string() const{
    string pointArray="size: "+to_string(this->length)+" points: ";
    for(int i=0;i<this->length;i++){
        pointArray += (&(this->arr[i]))->as_string();
        pointArray += "  ";
    }
    
    return pointArray;
}

void PointArray::push_back(const Point &p){
    cout<<"DEBUG: pushing back "<<p.as_string()<<endl;
    int old_length = this->length;
    resize(this->length + 1);
    this->arr[old_length] = p;
}

void PointArray::insert(int pos, const Point &p){
    cout<<"DEBUG: inserting "<<p.as_string()<<" into pos "<<pos<<endl;    
    if(pos<0){
        throw invalid_argument("pos is negative! "+to_string(pos));
    }
    else if(pos>this->length){
        throw invalid_argument("pos exceeds array limits: "+to_string(pos));
    }
    resize(this->length + 1);
    for(int i=(this->length-1);i>=0;i--){
        if(pos==i){
            this->arr[i] = p;
            break;
        }
        else{
            this->arr[i] = this->arr[i-1];    
        }
    }
}

void PointArray::remove(int pos){
    cout<<"DEBUG: removing pos "<<pos<<endl;
    if(pos<0){
        throw invalid_argument("Position is negative!!");
    }
    if(pos>=this->length){
        throw invalid_argument("Position doesn't correspond to an existing cell!!");
    }
    for(int i=pos;i<this->length;i++){
        if(pos==(this->length-1)){
            break;
        }
        this->arr[i]=this->arr[i+1];
    }
    resize(this->length - 1);
}

int PointArray::get_size() const{
    return this->length;
}

void PointArray::clear(){
    resize(0);
}

Point* PointArray::get(const int position){
    if(position<0){
        throw invalid_argument("Position is negative!!");
    }
    if(position>this->length){
        throw invalid_argument("Position doesn't correspond to an existing cell!!");
    }

    return & (this->arr[position]);
}

const Point* PointArray::get(const int position) const{
    if(position<0){
        throw invalid_argument("Position is negative!!");
    }
    if(position>this->length){
        throw invalid_argument("Position doesn't correspond to an existing cell!!");
    }

    return & (this->arr[position]);
}

/**
 * polygon
*/

int Polygon::npolygons = 0;
Point Polygon::constructorPoints[4];


Point*  Polygon::updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4){
   Polygon::constructorPoints [0] = p1;
   Polygon::constructorPoints [1] = p2;
   Polygon::constructorPoints [2] = p3;
   Polygon::constructorPoints [3] = p4;
 
   return Polygon::constructorPoints ;
}


Polygon::Polygon(const Point points [], const int length) {

    if(length < 3){
        throw invalid_argument("too few points to create a polygon!");
    }

    this->points = new PointArray(points,length);

    Polygon::npolygons += 1;
}

Polygon::Polygon(const PointArray* iarr):points(iarr){
    if(iarr->get_size() < 3){
        throw invalid_argument("too few points to create a polygon!");
    }
    Polygon::npolygons += 1;
}

Polygon::Polygon(const Polygon &pol){
    this->points = new PointArray(*pol.points);
    Polygon::npolygons += 1;
}


Polygon::~Polygon(){
    cout << "DEBUG: destroying polygon" << endl;
    delete this->points;
    Polygon::npolygons -= 1;
}


int Polygon::getNumPolygons(){
    return Polygon::npolygons;
}

int Polygon::getNumSides() const{
    this->points->get_size();
}

const PointArray* Polygon::getPoints() const{
    return this->points;
}

Rectangle::Rectangle(const Point low_left, const Point up_right):Polygon{
    Polygon::updateConstructorPoints(
        low_left,
        Point(low_left.get_x(),up_right.get_y()),
        up_right,
        Point(up_right.get_x(),low_left.get_y())
        ),
        4}{
            
    cout << "Rectangle(low_left,up_right) constructor" << endl;
}


Rectangle::Rectangle(const int xlowleft,const int ylowleft, const int xupright, const int yupright):Polygon{
    Polygon::updateConstructorPoints(
        Point(xlowleft,ylowleft),
        Point(xlowleft,yupright),
        Point(xupright,yupright),
        Point(xupright,ylowleft)
        ),
        4}{
            
    cout << "Rectangle(x1,y1,x2,y2) constructor" << endl;
}

double Rectangle::area() const{

    int width = abs(this->points->get(0)->get_x() - this->points->get(2)->get_x());
    int height = abs(this->points->get(0)->get_y() - this->points->get(1)->get_y());

    return width*height;
}

Triangle::Triangle(const Point low_left, const Point low_right, const Point up):Polygon{
    Polygon::updateConstructorPoints(
        low_left,
        low_right,
        up),
        3}{
            
    cout << "Triangle constructor" << endl;
}

double Triangle::area() const{

    double a,b,c,s,K;
    double x1 = this->points->get(0)->get_x();
    double y1 = this->points->get(0)->get_y();
    double x2 = this->points->get(1)->get_x();
    double y2 = this->points->get(1)->get_y();
    double x3 = this->points->get(2)->get_x();
    double y3 = this->points->get(2)->get_y();

    a = sqrt(pow((x3-x1),2) + pow((y3-y1),2));
    b = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    c = sqrt(pow((x3-x2),2) + pow((y3-y2),2));

    s =  (a+b+c)/2;
    K = sqrt( s*(s - a)*(s - b)*(s - c));

    return K;
}

