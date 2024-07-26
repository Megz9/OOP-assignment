#ifndef PROFILE_H_
#define PROFILE_H_
#include <string>

class profile{
    private:
        std::string TypeOfUser;
    public:
        profile()=delete;
        profile(const std::string& Type);
        std::string getType() const;
        void editProfile(const std::string& newTypeOfUser);
};

#endif