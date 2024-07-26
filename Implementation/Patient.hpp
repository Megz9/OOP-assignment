#include <iostream>
#include "Person.hpp"
#include "MedicalHistory.hpp"
// #include "Appointment.hpp"
#include <vector>

class Patient : public Person
{
    private:
        // std::vector<Appointment> AppointmentsOfPatient;
        MedicalHistory MedicalHistoryForPatient;
        int PatientID;
        static int count;
    public:
        Patient(const std::string& Name ,int Age, int PhoneNumber,const std::string& Email, const std::string& Gender,const std::string& Type);
        void PatientInfo()
        {
            std::cout << this->PatientID <<"\n";
            std::cout << this->getName()<<"\n";
        }
        MedicalHistory& getMedicalHistory() ;
        // void bookAppointment(/*take reference to doctor*/);
        // void cancelAppointment();
};
