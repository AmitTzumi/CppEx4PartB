#include "Board.hpp"

using namespace std;

namespace pandemic{

    Board::Board(){
        
       City_node c;
       c.city = Algiers;
       c.color = Black;
       c.level = 0;
       c.neighbors = {Madrid, Paris ,Istanbul, Cairo};
       this->cities.insert({Algiers, c});
       c.city = Atlanta;
       c.color = Blue;
       c.neighbors = {Chicago ,Miami, Washington};
       this->cities.insert({Atlanta, c});
       c.city = Baghdad;
       c.color = Black;
       c.neighbors = {Tehran, Istanbul, Cairo, Riyadh, Karachi};
       this->cities.insert({Baghdad, c});
       c.city = Bangkok;
       c.color = Red;
       c.neighbors = {Kolkata ,Chennai ,Jakarta ,HoChiMinhCity ,HongKong};
       this->cities.insert({Bangkok, c});
       c.city = Beijing;
       c.color = Red;
       c.neighbors = {Shanghai ,Seoul};
       this->cities.insert({Beijing, c});
       c.city = Bogota;
       c.color = Yellow;
       c.neighbors = {MexicoCity ,Lima ,Miami ,SaoPaulo ,BuenosAires};
       this->cities.insert({Bogota, c});
       c.city = BuenosAires;
       c.color = Yellow ;
       c.neighbors = {Bogota ,SaoPaulo};
       this->cities.insert({BuenosAires, c});
       c.city = Cairo;
       c.color = Black;
       c.neighbors = {Algiers, Istanbul ,Baghdad ,Khartoum, Riyadh};
       this->cities.insert({Cairo, c});
       c.city = Chennai;
       c.color = Black;
       c.neighbors = {Mumbai, Delhi ,Kolkata ,Bangkok ,Jakarta};
       this->cities.insert({Chennai, c});
       c.city = Chicago;
       c.color = Blue;
       c.neighbors = {SanFrancisco ,LosAngeles ,MexicoCity ,Atlanta ,Montreal};
       this->cities.insert({Chicago, c});
       c.city = Delhi;
       c.color = Black;
       c.neighbors = {Tehran ,Karachi ,Mumbai ,Chennai ,Kolkata};
       this->cities.insert({Delhi, c});
       c.city = Essen;
       c.color = Blue;
       c.neighbors = {London ,Paris ,Milan ,StPetersburg};
       this->cities.insert({Essen, c});
       c.city = HoChiMinhCity;
       c.color = Red;
       c.neighbors = {Jakarta ,Bangkok ,HongKong ,Manila};
       this->cities.insert({HoChiMinhCity, c});
       c.city = HongKong;
       c.color = Red;
       c.neighbors = {Bangkok ,Kolkata ,HoChiMinhCity ,Shanghai ,Manila ,Taipei};
       this->cities.insert({HongKong, c});
       c.city = Istanbul;
       c.color = Black;
       c.neighbors = {Milan ,Algiers ,StPetersburg ,Cairo ,Baghdad ,Moscow};
       this->cities.insert({Istanbul, c});
       c.city = Jakarta;
       c.color = Red;
       c.neighbors = {Chennai ,Bangkok ,HoChiMinhCity ,Sydney};
       this->cities.insert({Jakarta, c});
       c.city = Johannesburg;
       c.color = Yellow;
       c.neighbors = {Kinshasa ,Khartoum};
       this->cities.insert({Johannesburg, c});
       c.city = Karachi;
       c.color = Black;
       c.neighbors = {Tehran ,Baghdad ,Riyadh ,Mumbai ,Delhi};
       this->cities.insert({Karachi, c});
       c.city = Khartoum;
       c.color = Yellow;
       c.neighbors = {Cairo ,Lagos ,Kinshasa ,Johannesburg};
       this->cities.insert({Khartoum, c});
       c.city = Kinshasa;
       c.color = Yellow;
       c.neighbors = {Lagos ,Khartoum ,Johannesburg};
       this->cities.insert({Kinshasa, c});
       c.city = Kolkata;
       c.color = Black;
       c.neighbors = {Delhi ,Chennai ,Bangkok ,HongKong};
       this->cities.insert({Kolkata, c});
       c.city = Lagos;
       c.color = Yellow;
       c.neighbors = {SaoPaulo ,Khartoum ,Kinshasa};
       this->cities.insert({Lagos, c});
       c.city = Lima;
       c.color = Yellow;
       c.neighbors = {MexicoCity ,Bogota ,Santiago};
       this->cities.insert({Lima, c});
       c.city = London;
       c.color = Blue;
       c.neighbors = {NewYork ,Madrid ,Essen ,Paris};
       this->cities.insert({London, c});
       c.city = LosAngeles;
       c.color = Yellow;
       c.neighbors = {SanFrancisco ,Chicago ,MexicoCity ,Sydney};
       this->cities.insert({LosAngeles, c});
       c.city = Madrid;
       c.color = Blue;
       c.neighbors = {London ,NewYork ,Paris ,SaoPaulo ,Algiers};
       this->cities.insert({Madrid, c});
       c.city = Manila;
       c.color = Red;
       c.neighbors = {Taipei ,SanFrancisco ,HoChiMinhCity ,Sydney, HongKong};
       this->cities.insert({Manila, c});
       c.city = MexicoCity;
       c.color = Yellow;
       c.neighbors = {LosAngeles ,Chicago ,Miami ,Lima ,Bogota};
       this->cities.insert({MexicoCity, c});
       c.city = Miami;
       c.color = Yellow;
       c.neighbors = {Atlanta ,MexicoCity ,Washington ,Bogota};
       this->cities.insert({Miami, c});
       c.city = Milan;
       c.color = Blue;
       c.neighbors = {Essen ,Paris ,Istanbul};
       this->cities.insert({Milan, c});
       c.city = Montreal;
       c.color = Blue;
       c.neighbors = {Chicago ,Washington ,NewYork};
       this->cities.insert({Montreal, c});
       c.city = Moscow;
       c.color = Black;
       c.neighbors = {StPetersburg ,Istanbul ,Tehran};
       this->cities.insert({Moscow, c});
       c.city = Mumbai;
       c.color = Black;
       c.neighbors = {Karachi ,Delhi ,Chennai};
       this->cities.insert({Mumbai, c});
       c.city = NewYork;
       c.color = Blue;
       c.neighbors = {Montreal ,Washington ,London ,Madrid};
       this->cities.insert({NewYork, c});
       c.city = Osaka;
       c.color = Red;
       c.neighbors = {Taipei ,Tokyo};
       this->cities.insert({Osaka, c});
       c.city = Paris;
       c.color = Blue;
       c.neighbors = {Algiers ,Essen ,Madrid ,Milan ,London};
       this->cities.insert({Paris, c});
       c.city = Riyadh;
       c.color = Black;
       c.neighbors = {Baghdad ,Cairo ,Karachi};
       this->cities.insert({Riyadh, c});
       c.city = SanFrancisco;
       c.color = Blue;
       c.neighbors = {LosAngeles ,Chicago ,Tokyo ,Manila};
       this->cities.insert({SanFrancisco, c});
       c.city = Santiago;
       c.color = Yellow;
       c.neighbors = {Lima};
       this->cities.insert({Santiago, c});
       c.city = SaoPaulo;
       c.color = Yellow;
       c.neighbors = {Bogota ,BuenosAires ,Lagos ,Madrid};
       this->cities.insert({SaoPaulo, c});
       c.city = Seoul;
       c.color = Red;
       c.neighbors = {Beijing ,Shanghai ,Tokyo};
       this->cities.insert({Seoul, c});
       c.city = Shanghai;
       c.color = Red;
       c.neighbors = {Beijing ,HongKong ,Taipei ,Seoul ,Tokyo};
       this->cities.insert({Shanghai, c});
       c.city = StPetersburg;
       c.color = Blue;
       c.neighbors = {Essen ,Istanbul ,Moscow};
       this->cities.insert({StPetersburg, c});
       c.city = Sydney;
       c.color = Red;
       c.neighbors = {Jakarta ,Manila ,LosAngeles};
       this->cities.insert({Sydney, c});
       c.city = Taipei;
       c.color = Red;
       c.neighbors = {Shanghai ,HongKong ,Osaka ,Manila};
       this->cities.insert({Taipei, c});
       c.city = Tehran;
       c.color = Black;
       c.neighbors = {Baghdad ,Moscow ,Karachi ,Delhi};
       this->cities.insert({Tehran, c});
       c.city = Tokyo;
       c.color = Red;
       c.neighbors = {Seoul ,Shanghai ,Osaka ,SanFrancisco};
       this->cities.insert({Tokyo, c});
       c.city = Washington;
       c.color = Blue;
       c.neighbors = {Atlanta ,NewYork ,Montreal ,Miami};
       this->cities.insert({Washington, c});
       
    }

    int& Board::operator[](City c){
        return this->cities[c].level;
    }

    bool Board::is_clean(){
        map<City, City_node>::iterator itr; 
        for (itr = this->cities.begin(); itr !=  this->cities.end(); ++itr) { 
            if(itr->second.level!=0){
                return false;
            }
        } 
        return true;
    }

    void Board::remove_cures(){
        cures.clear();
    }

    ostream& operator<<(ostream& out, Board &b){ 
        map<City, City_node>::iterator itr; 
        out << endl;
        for (itr =  b.cities.begin(); itr !=  b.cities.end(); ++itr){
            if(itr->second.level!=0){
                out << CityToString(itr->first) <<  " - " << itr->second.level << endl;
            }
        } 
        for(auto itr = b.cures.begin(); itr!=b.cures.end(); ++itr){
            out << "Discovered color - " << ColorToString(*itr) << endl;
        }
        for(auto itr = b.research_stations.begin(); itr!=b.research_stations.end(); ++itr){
            out << "Built research station - " << CityToString(*itr) << endl;
        }
            return out;
    }    
}