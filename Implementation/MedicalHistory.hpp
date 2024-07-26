#ifndef MEDICAL_HISTORY_H_
#define MEDICAL_HISTORY_H_
#include <string>
#include <iostream>
class MedicalHistory{
    private:
        std::string Date;
        std::string Description;
        std::string Prescription;
    public:
        MedicalHistory() = default ;
        void editDescription(const std::string& Description);
        void editDate(const std::string& Date);
        void editPrescription(const std::string& Prescription);
        void viewMedicalHistory() const ;
};

#endif