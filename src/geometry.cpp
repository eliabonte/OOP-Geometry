
#include "geometry.h"
#include <cmath>
#include <stdexcept> 
#include "iostream"

using namespace std;    

Point::Point(int x , int y ){
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
    cout<<"DEBUG: copy constructor"<<endl;
    this->length=pv.length;
    this->arr=new Point[this->length];
    for(int i=0;i<this->length;i++){
        this->arr[i]=pv.arr[i];
    }
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

string PointArray::as_string(){
    string pointArray="size: "+to_string(this->length)+" points: ";
    for(int i=0;i<this->length;i++){
        pointArray += (&(this->arr[i]))->as_string();
        pointArray += "  ";
    }
    
    return pointArray;
}

void PointArray::push_back(Point &p){
    cout<<"DEBUG: pushing back "<<p.as_string()<<endl;
    int old_length = this->length;
    resize(this->length + 1);
    this->arr[old_length] = p;
}

void PointArray::insert(int pos, Point &p){
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

int PointArray::get_size(){
    return this->length;
}

void PointArray::clear(){
    resize(0);
}

Point* PointArray::get(int position){
    if(position<0){
        throw invalid_argument("Position is negative!!");
    }
    if(position>this->length){
        throw invalid_argument("Position doesn't correspond to an existing cell!!");
    }

    return & (this->arr[position]);
}