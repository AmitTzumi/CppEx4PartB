#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    class Medic : public Player{
        public:
        Medic(Board& b, City c);
        string role();
        Player& treat(City c);
        Player& drive(City c);
        Player& fly_charter(City c);
        Player& fly_shuttle(City c);
        Player& fly_direct(City c);
    };
}