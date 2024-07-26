#ifndef LOGINMANAGMENT_H_
#define LOGINMANAGMENT_H_

#include <iostream>
#include "Person.hpp"

class Login{
    // private:
        // Person *person;
    public:
        Login() = delete  ;
        //Login(Person *person);
        static void LoginAuthentication(const Person *person);
};

#endif