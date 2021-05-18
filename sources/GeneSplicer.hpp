#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    class GeneSplicer : public Player{
        public:
        GeneSplicer(Board& b, City c);
        string role();
        Player& discover_cure(Color c);
    };
}