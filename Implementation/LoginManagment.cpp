#include "LoginManagment.hpp"
//Login::Login(Person *person) = delete;
void Login::LoginAuthentication(const Person *person) 
{
    std::cout<<"Hi Mr: "<< person->getName() <<"\n" ;
    std::cout<<" You are logined \n" ;
}