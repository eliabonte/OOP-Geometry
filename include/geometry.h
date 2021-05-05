#ifndef GEOMETRY_H
#define GEOMETRY_H


/*
 * C++-style examples
 * 
 */

#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;


/**
    class representing a point
*/
class Point {
    
    private:
        int x;
        int y;
    public:

        /**
            single constructor that, if called with 0 arguments, initializes a point to the
            origin – (0, 0) – but if called with two arguments x and y, creates a point located at (x, y)
        */
        Point(int x=0, int y=0);
        
        /**  
            Get the x coordinate
        */      
        int get_x();


        /**  
            Get the y coordinate
        */      
        int get_y();

        /**  
            Set the x coordinate
        */      
        void set_x(const int x);

        /**  
            Set the y coordinate
        */      
        void set_y(const int y);

        /** 
            Return a representation of the Point as a C++ string
        */
        string as_string();
};

/**
    class representing an array of points
*/
class PointArray {
    
    private:
        int x;
        int y;
    public:

        /**
            single constructor that, if called with 0 arguments, initializes a point to the
            origin – (0, 0) – but if called with two arguments x and y, creates a point located at (x, y)
        */
        Point(int x=0, int y=0);
        
        /**  
            Get the x coordinate
        */      
        int get_x();


        /**  
            Get the y coordinate
        */      
        int get_y();

        /**  
            Set the x coordinate
        */      
        void set_x(const int x);

        /**  
            Set the y coordinate
        */      
        void set_y(const int y);

        /** 
            Return a representation of the Point as a C++ string
        */
        string as_string();
};
    



#endif // GEOMETRY_H
