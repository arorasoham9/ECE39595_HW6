#include <iostream>
#include <string>
#include "Person.h"

Person::Person(const std::string& _name, const  int& _birthMonth, const int& _birthDay, const int& _birthYear, const Address& _address): name(_name), address(_address){ 
   // name = _name;
   // dateOfBirth = new std::string(std::to_string(_birthMonth)+"/"+std::to_string(_birthDay)+"/"+std::to_string(_birthYear)); // this should be the only line in the constructor body
   // address = _address;
   dateOfBirth = std::to_string(_birthMonth)+"/"+std::to_string(_birthDay)+"/"+std::to_string(_birthYear);
}

std::string Person::getRole( ) { 
   return "unknown";
}

std::string Person::getName( )const{
   return name;
}

int Person::getZipCode( ) const {
   return address.getZipCode();
}
std::string Person::getDateOfBirth( )const {
   return dateOfBirth;
}
