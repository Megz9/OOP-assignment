#include <iostream>
#include "Person.hpp"
#include "LoginManagment.hpp"
#include "MedicalHistory.hpp"
#include "Patient.hpp"
int main(void)
{
    // Person PatientOne("Megzo",23,0100,"mg@asu.com","male","Doctor");
    // // Login::LoginAuthentication(&PatientOne);
    // std::cout << PatientOne.getUserProfile().getType()<<"\n";
    // PatientOne.editUserProfile("Patient");
    // std::cout << PatientOne.getUserProfile().getType()<<"\n";
    // return 0 ;
    // MedicalHistory M1;
    // M1.editDate("17/11/2024");
    // M1.editDescription("heart attack");
    // M1.editPrescription("die");
    // M1.viewMedicalHistory();
    // M1.editDate("01/12/2024");
    // M1.editDescription("diabetes");
    // M1.editPrescription("less suger");
    // M1.viewMedicalHistory();

    Patient p1("Megzo",23,0100,"mg@asu.com","male","Doctor");
    p1.PatientInfo();
    p1.getMedicalHistory().editDate("17/11/2024");
    p1.getMedicalHistory().editDescription("heart attack");
    p1.getMedicalHistory().editPrescription("die");
    p1.getMedicalHistory().viewMedicalHistory();
    return 0 ;
    }