#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    class Virologist : public Player{
        public:
        Virologist(Board& b, City c);
        string role();
        Player& treat(City c);
    };
}