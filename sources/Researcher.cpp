#include "Researcher.hpp"

namespace pandemic{

    constexpr int numInColor = 5;

    Researcher::Researcher(Board& b, City c) : Player(b,c){
            name = "Researcher";
        }

    string Researcher::role(){
        return name;
    }

    Player& Researcher::discover_cure(Color c){
            if(b.cures.contains(c)){
                return *this;
            }
            int count =0;
            for(auto itr = cards.begin(); itr != cards.end(); ++itr){
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
}