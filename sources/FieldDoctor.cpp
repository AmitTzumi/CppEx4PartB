#include "FieldDoctor.hpp"

namespace pandemic{

    FieldDoctor::FieldDoctor(Board& b, City c) : Player(b,c){
        name = "FieldDoctor";
    }

    string FieldDoctor::role(){
        return name;
    }

    Player& FieldDoctor::treat(City c){
            if(this->location == c || b.cities[this->location].neighbors.contains(c)){
                if(b.cities[c].level != 0){
                    if(b.cures.contains(b.cities[c].color)){
                        b.cities[c].level = 0;
                    }
                    else{
                        b.cities[c].level = b.cities[c].level-1;
                    }
                }
                else{
                    throw "You can not treat when level is 0";
                }
            }
            else{
                throw "You can not treat because you should be in your location or at her neighbors";
            }
        return *this;
    }
}