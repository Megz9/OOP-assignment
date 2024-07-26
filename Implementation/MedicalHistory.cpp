#include "MedicalHistory.hpp"


void MedicalHistory::editDescription(const std::string& Description)
{
    this->Description = Description;
}
void MedicalHistory::editDate(const std::string& Date)
{
    this->Date = Date;
}
void MedicalHistory::editPrescription(const std::string& Prescription)
{
    this->Prescription = Prescription ;
}
void MedicalHistory::viewMedicalHistory() const 
{
    std::cout<<"The Date: "<< this->Date <<" ,The Description: "
    <<this->Description<<" ,The Prescription: "<< this->Prescription <<"\n";
}