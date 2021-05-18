#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic{
    class OperationsExpert : public Player{
        public:
            OperationsExpert(Board& b, City c);
            string role();   
            Player& build();
    };
}