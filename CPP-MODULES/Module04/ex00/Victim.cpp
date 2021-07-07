#include "Victim.hpp"

Victim::Victim( void ){
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}
Victim::Victim( std::string const &  name ) : _name(name){
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
    *this = src;
}

Victim & Victim::operator = (Victim const & src){
    if(this != &src)
        this->_name = src.getName();
    return *this;
}

Victim::~Victim( void ){
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream  & operator << ( std::ostream &o, Victim & victim) {
     o << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return o;
}

std::string Victim::getName( void ) const{
    return this->_name;
}

void Victim::getPolymorphed( void ) const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}