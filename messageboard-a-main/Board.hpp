
#pragma once


#include <iostream>
#include "Direction.hpp"

using namespace std;



namespace ariel{
 class Board{


    public:
    
void post(unsigned int row, unsigned int column, Direction dil , string str);

string read(unsigned int row, unsigned int column, Direction dil, unsigned int length);
 void show();

};

}