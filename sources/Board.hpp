#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <map>
//#include "City_node.hpp"
#include "Color.hpp"
#include "City.hpp"
#include <unordered_set>

namespace pandemic{

    struct City_node {
        City city;
        Color color;
        int level;
        unordered_set <City> neighbors;
        City_node(){
            city = Algiers;
            color = Red;
            level=0;
        }
    };

    class Board{
        public:
            map <City,City_node> cities;
            unordered_set <City> research_stations;
            unordered_set <Color> cures;
            Board();
            int& operator[](City c); 
            bool is_clean();
            void remove_cures();
            friend ostream& operator<<(ostream& out, Board &b); // print Board type
    };                

}