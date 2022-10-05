#include <string>
#include <iostream>
#include "Address.h"
using namespace std;

Address::Address(const std::string& _street, const std::string& _city,const  std::string& _state, const int& _zip):street(_street), city(_city), state(_state), zip(_zip){
   // street = _street;
   // city = _city;
   // state = _state; 
   // zip = _zip;
}

string Address::getAddress() const{
   return std::string(street+"\n"+city+"\n"+state+"\n"+std::to_string(zip));
}


int Address::getZipCode( ) const {
   return zip;
}
