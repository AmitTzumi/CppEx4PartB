#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace pandemic{
    enum Color{Yellow, Blue, Black, Red, Last};
       
    inline string ColorToString(Color num) {
    return (num == 0) ? "Black": (num == 1) ? "Blue": (num == 2) ? "Red": "Yellow";
    }
    
}