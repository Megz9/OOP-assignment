#include <string>
#include <cstring>
#include <iostream>
#include "Profile.hpp"

#ifndef PERSON_H_
#define PERSON_H_
class Person
{
    private:
        std::string Name ;
        int Age;
        int PhoneNumber;
        std::string Email;
        std::string Gender;
        profile userProfile;
    public:
        Person()=delete;
        Person(const std::string& Name ,int Age, int PhoneNumber,const std::string& Email, const std::string& Gender,const std::string Type );
        void Login();
        std::string getName() const;
        profile getUserProfile() const;
        void editUserProfile(const std::string& newType);
};


#endif