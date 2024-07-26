#include "Profile.hpp"

profile::profile(const std::string& Type): TypeOfUser(Type){}
std::string profile::getType() const
{
    return this->TypeOfUser;
}

void profile::editProfile(const std::string& newTypeOfUser) 
{
    this->TypeOfUser = newTypeOfUser ;
}