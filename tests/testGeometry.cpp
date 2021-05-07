
#include "geometry.h"
#include "catch2/catch2.hpp"

using namespace std;


TEST_CASE ("Constructor, if called with 0 arguments, should initialize a point (0,0)", "[Point][default constructor]"){        
        Point p;
        REQUIRE(p.get_x() == 0);
        REQUIRE(p.get_y() == 0);
}

TEST_CASE ("Constructor, if called with two arguments x and y, creates a point located at (x, y)", "[Point][constructor]"){        
        Point p (1,2);
        REQUIRE(p.get_x() == 1);
        REQUIRE(p.get_y() == 2);
}   

TEST_CASE ("set_x should set x coordinate", "[Point]"){        
        Point p (1,1);
        p.set_x(3);
        REQUIRE(p.get_x() == 3);
}   

TEST_CASE ("set_y should set y coordinate", "[Point]"){        
        Point p (1,1);
        p.set_y(3);
        REQUIRE(p.get_y() == 3);
}

TEST_CASE ("Default constructor, it should create an array with size 0", "[PointArray][default constructor]"){        
        PointArray arr;
        REQUIRE(arr.get_size() == 0);
}

TEST_CASE ("Constructor, it should initialize a PointArray with the specified size, copying the values from an array", "[PointArray][constructor]"){        
        Point points [2] = {(1,1),(1,1)};
        
        PointArray arr (points, 2);

        REQUIRE(arr.get_size() == 2);
}

TEST_CASE ("Constructor, it should initialize a PointArray with the specified size, copying the values from an array", "[PointArray][constructor]"){        
        Point points [2] = {(1,1),(1,1)};
        
        PointArray array (points, 2);

        REQUIRE(array.get(0)->get_x() == 1);
        REQUIRE(array.get(0)->get_y() == 1);
        REQUIRE(array.get(1)->get_x() == 1);
        REQUIRE(array.get(1)->get_y() == 1);
}

TEST_CASE ("Negative size should throw std::invalid_argument", "[PointArray][constructor]"){        
        Point points [2] = {(1,1),(1,1)};

        REQUIRE_THROWS_AS( PointArray(points,-2), invalid_argument);  
        
}
