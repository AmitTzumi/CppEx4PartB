#include "Player.hpp"

using namespace std;

namespace pandemic{

    constexpr int numInColor = 5;

    Player::Player(Board& b, City c): b(b), location(c){}

    string Player::role(){
        cout << "role() base Player\n";
        return name;
    }

    Player& Player::drive(City c){
            if(b.cities[this->location].neighbors.contains(c)){
                this->location = c;
                return *this;
            }
            throw "You can not drive this city because they are not neighbors";
        return *this;
    }

    Player& Player::fly_direct(City c){
            if(this->cards.contains(c)){
                this->cards.erase(c);
                this->location = c;
            }
            else{
                throw "You do not have the city card to fly_direct";
            }
        return *this;
    }

    Player& Player::fly_charter(City c){
            if(this->cards.contains(this->location)){
                this->cards.erase(this->location);
                this->location = c;
            }
            else{
                throw "You do not have the city you are standing on to use fly_charter";
            }
        return *this;
    }

    Player& Player::fly_shuttle(City c){
            if(b.research_stations.contains(this->location) && b.research_stations.contains(c) && (this->location!=c)){
                this->location = c;
            }
            else{
                throw "You can not move this city using fly_shuttle";
            }
        return *this;
    }

    Player& Player::build(){
        if(!b.research_stations.contains(this->location)){
            if(this->cards.contains(this->location)){
                this->cards.erase(this->location);
                b.research_stations.insert(this->location);
            }
            else{
                throw "You do not have the city card";
            }
        }
        return *this;
    }

    Player& Player::discover_cure(Color c){
            if(b.cures.contains(c)){
                return *this;
            }
            if(!b.research_stations.contains(this->location)){
                throw "You have to be in a research station to discover cure";
            }
            int count =0;
            for(auto itr = this->cards.begin(); itr != this->cards.end(); ++itr){
                if(b.cities[*itr].color == c){
                    count++;
                }
            }
            int counter1 = 0;
            if(count >= numInColor){
                unordered_set <City> temp = this->cards;
                for (City city: temp)
                {
                    if(b.cities[city].color == c)
                    {
                        this->cards.erase(city);
                        counter1++;
                    }
                    if(counter1==numInColor)
                    {
                        b.cures.insert(c);
                        break;
                    }
                }
            }
            else{
                throw "There is not enough cards in this color";
                }
        return *this;
    }

    Player& Player::treat(City c){
            if(this->location!=c){
                throw "You should treat only in your location";
            }
            if(b.cities[c].level == 0){
                throw "You can not treat when level is 0";
            }
            if(b.cures.contains(b.cities[c].color)){
                b.cities[c].level = 0;
            }
            else{
                b.cities[c].level = b.cities[c].level-1;
            }
        return *this;
    }

    Player& Player::take_card(City c){
        for(auto itr = this->cards.begin(); itr!=this->cards.end(); ++itr){
            if(*itr == c){
                return *this;
            }
        }
        this->cards.insert(c);
        return *this;
    }
}