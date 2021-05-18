#include "Dispatcher.hpp"

namespace pandemic{

    Dispatcher::Dispatcher(Board& b, City c) : Player(b,c){
        name = "Dispatcher";
    }

    string Dispatcher::role(){
        return name;
    }

    Player& Dispatcher::fly_direct(City city){
        if(b.research_stations.contains(this->location) && (this->location!=city)){
            this->location = city;
        }
        else{
            if(this->cards.contains(city)){
                this->cards.erase(city);
                this->location = city;
            }
            else{
                throw "You do not have the city card to fly_direct or You are not in research station or in the same city";
            }
            return *this;
        }
        return *this;
    }
}