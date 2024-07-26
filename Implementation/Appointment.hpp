#include <string>
#include <iostream>
class Appointment
{
    private:
        std::string DateOfAppointment;
        std::string LocationOfAppointment;
        int AppointmentPrice;
    public:
        Appointment()=delete;
        Appointment(std::string DateOfAppointment,std::string LocationOfAppointment,int AppointmentPrice);
        void displayAppointment() const;
    ;
};