#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <map>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic{
    class Player{
        protected:
            Board& b;
            City location;
            string name;
            unordered_set<City> cards;
        public:
            Player(Board& b, City c);
            Player& drive(City c);
            Player& fly_charter(City c);
            Player& fly_shuttle(City c);
            Player& take_card(City c);
            virtual Player& build();
            virtual string role();
            virtual Player& fly_direct(City c);
            virtual Player& discover_cure(Color c);
            virtual Player& treat(City c);
    };
}