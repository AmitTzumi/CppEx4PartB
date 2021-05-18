#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    class Researcher : public Player{
        public:
        Researcher(Board& b, City c);
        string role();
        Player& discover_cure(Color c);
    };
}