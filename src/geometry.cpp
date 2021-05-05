
#include "geometry.h"
#include <cmath>
#include "iostream"


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

