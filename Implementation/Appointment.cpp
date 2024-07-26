#include "Appointment.hpp"

Appointment::Appointment(std::string DateOfAppointment,std::string LocationOfAppointment,int AppointmentPrice):
DateOfAppointment(DateOfAppointment), LocationOfAppointment(LocationOfAppointment), AppointmentPrice(AppointmentPrice)
{
}

void Appointment::displayAppointment() const
{
    std::cout << "This appointment at : "<<this->DateOfAppointment<<"\n" ;
    std::cout << "This appointment in : "<<this->LocationOfAppointment<<"\n" ;
    std::cout << "The appointment cost : "<<this->AppointmentPrice<<"\n";
}