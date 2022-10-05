#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>

class Address {
public:
   Address(const std::string& _street, const std::string& _city, const std::string& _state, const int& _zip);

   virtual int getZipCode( ) const ;
   virtual std::string getAddress( ) const;

private:
   const std::string street;
   const std::string city;
   const std::string state;
   const int zip;
};
#endif /* ADDRESS_H_ */
