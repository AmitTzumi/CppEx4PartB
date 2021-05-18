#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    class Scientist : public Player{
        public:
        int param;
        Scientist(Board& b, City c, int level);
        string role();
        Player& discover_cure(Color c);
    };
}