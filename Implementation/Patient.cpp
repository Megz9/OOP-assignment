#include "Patient.hpp"
int Patient::count = 0 ;
Patient::Patient(const std::string& Name ,int Age, int PhoneNumber,const std::string& Email, const std::string& Gender,const std::string& Type) 
:Person(Name,Age,PhoneNumber,Email,Gender,Type)
{
    count++;
    this->PatientID = count ; 
}

MedicalHistory& Patient::getMedicalHistory() 
{
    return this->MedicalHistoryForPatient;
}