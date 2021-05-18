#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    class FieldDoctor : public Player{
        public:
        FieldDoctor(Board& b, City c);
        string role();
        Player& treat(City c);
    };
}