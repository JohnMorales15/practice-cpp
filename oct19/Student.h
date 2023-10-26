#include <iostream>
#include "Address.h"
#include <string>

class Student
{
    public:
        Student(std::string name, unsigned int studentID, Address studentAddress);
        ~Student();

        std::string getName();
        int getStudentID();

        std::string setName();
        int setStudentID();
        print();

    private:
        std::string name;
        unsigned int studentID;

        Address studentAddress;

}

