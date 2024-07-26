#include "Person.hpp"

Person::Person(const std::string& Name ,int Age, int PhoneNumber,const std::string& Email, const std::string& Gender,const std::string Type) : userProfile(Type)
{
    this->Name = Name ;
    this->Age = Age ;
    this->PhoneNumber = PhoneNumber ;
    this->Email = Email ;
    this->Gender = Gender;
}

void Person::Login()
{
    std::cout<<"Welcome "<<this->Name<<"\n";
}

std::string Person::getName() const
{
    return this->Name ;
}


profile Person::getUserProfile() const
{
    return this->userProfile ;
}

void Person::editUserProfile(const std::string& newType) {
    userProfile.editProfile(newType);
}