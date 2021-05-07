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
 * class representing a point
*/
class Point {
    
    private:
        int x;
        int y;
    public:

        /**
         * single constructor that, if called with 0 arguments, initializes a point to the
           origin – (0, 0) – but if called with two arguments x and y, creates a point located at (x, y)
        */
        Point(int x = 0, int y = 0);
        
        /**  
         * Get the x coordinate
        */      
        int get_x();

        /**  
         * Get the y coordinate
        */      
        int get_y();

        /**  
         * Set the x coordinate
        */      
        void set_x(const int x);

        /**  
         * Set the y coordinate
        */      
        void set_y(const int y);

        /** 
         * Return a representation of the Point as a C++ string
        */
        string as_string();
};

/**
 * class representing an array of points
*/
class PointArray {
    
    private:
        Point* arr;
        int length;

        /**
         * allocates a new array of size n
         * Negative size should throw std::invalid_argument
        */
        void resize(int n);

    public:

        /**
         * default constructor, it should create an array with size 0
        */
        PointArray();
        
        /**
         * constructor that takes a Point array called points and an int called size
           as its arguments. It should initialize a PointArray with the specified size, copying the values from points. 
           Negative size should throw std::invalid_argument
        */
        PointArray(const Point points[], const int size);

        /**
         * constructor that creates a copy of a given PointArray (a copy constructor )
        */
       PointArray(const PointArray& pv);

        /** 
         * destructor that deletes the internal array of the PointArray.
        */
        ~PointArray(); 

        /**
         * Return a representation of the PointArray with all its points as a C++ string
        */ 
        string as_string();

        /**
         * Add a Point to the end of the array
        */
        void push_back(Point &p);

        /**
         * Insert a Point at some arbitrary position (subscript) of the array, 
            shifting the elements past position to the right
         * If pos is negative or greater than current size, throw std::invalid_argument exception
        */
        void insert(int pos, Point &p);

        /**
         * Remove the Point at some arbitrary position (subscript) of the array, shifting the
            remaining elements to the left
         * if pos is negative or doesn’t correspond to an existing cell, throw std::invalid_argument exception
        */
        void remove(int pos);

        /**
         * Get the size of the array
        */
        int get_size();

        /**
         * Remove everything from the array and sets its size to 0 
        */
        void clear();

        /**
         * Get a pointer to the element at some arbitrary position in the array
         * If get is called with an index larger than the array size, 
            there is no Point you can return a pointer to, throw an std::invalid_argument
        */     
        Point* get(int position);
        
};    



#endif // GEOMETRY_H
