
#include "geometry.h"
#include <cmath>
#include "iostream"

using namespace std;    

Point::Point(int x, int y){
    if(x!=0 && y!=0){
        this->x=x;
        this->y=y;
    }
    else{
        this->x=0;
        this->y=0;
    }
}
                            
int Point::get_x(){
    return this->x;
}


int Point::get_y(){
    return this->y;
}

void Point::set_x(const int x){
    this->x=x;
}

void Point::set_y(const int y){
    this->y=y;
}

string Point::as_string(){
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

PointArray::PointArray(const PointArray& pv){
   this->length=pv.length;
   this->arr=new Point[this->length];
   for(int i=0;i<this->length;i++){
        this->arr[i]=pv.arr[i];
   }
}

PointArray::~PointArray(){
    delete [] this->arr;
}

void PointArray::resize(int n){
    if(n<0){
        throw invalid_argument("New size is negative!!");
    }
    Point* new_arr = new Point[n];
    for(int i=0;i<min(n,this->length);i++){
        new_arr[i] = this->arr[i];
    }
    delete [] this->arr;

    this->arr = new_arr;
    this->length = n;
}

string PointArray::as_string(){
    string pointArray="";
    for(int i=0;i<this->length;i++){
        pointArray += this->arr->as_string();
        pointArray += "  ";
    }
    return pointArray;
}

void PointArray::push_back(Point &p){
    int old_length = this->length;
    resize(this->length + 1);
    this->arr[old_length] = p;
}

void PointArray::insert(int pos, Point &p){
    resize(this->length + 1);
    for(int i=this->length;i>0;i--){
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
    
}