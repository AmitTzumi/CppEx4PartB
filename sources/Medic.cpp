#include "Medic.hpp"

namespace pandemic{

    Medic::Medic(Board& b, City c) : Player(b,c){
            name = "Medic";
            if(b.cures.contains(b.cities[c].color)){
                b.cities[c].level = 0;
            }
        }

    string Medic::role(){
        return name;
    }

    Player& Medic::treat(City c){
        if(b.cities[c].level == 0){
            throw "You can not treat when level is 0";
        }
        b.cities[c].level = 0;
        return *this;
    }

    Player& Medic::drive(City c){
        this->Player::drive(c);
        if(b.cures.contains(b.cities[c].color)){ 
            b.cities[c].level = 0;
            }
        return *this;
    }

    Player& Medic::fly_direct(City c){
        this->Player::fly_direct(c);
        if(b.cures.contains(b.cities[c].color)){ 
            b.cities[c].level = 0;
            }
        return *this;
    }

    Player& Medic::fly_shuttle(City c){
        this->Player::fly_shuttle(c);
        if(b.cures.contains(b.cities[c].color)){ 
            b.cities[c].level = 0;
            }
        return *this;
    }

    Player& Medic::fly_charter(City c){
        this->Player::fly_charter(c);
       if(b.cures.contains(b.cities[c].color)){ 
            b.cities[c].level = 0;
            }
        return *this;
    }
}