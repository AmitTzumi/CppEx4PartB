#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
using namespace std;

namespace pandemic{
    class Dispatcher : public Player{
        public:
        Dispatcher(Board& b, City c);
        string role();
        Player& fly_direct(City city);
    };
}