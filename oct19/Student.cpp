#include <iostream>
#include "Student.h"
#include <string>

//default constructor
Student::Student(std::string name, unsigned int studentID, Address studentAddress):
    name{name}, studentID{studentID}, studentAddress(studentAddress)
{
        //intentionally left blank
}

//deconstructor
Student::~Student()
{}

std::string Student::getName() const
{
    return name;
}

int Student::getStudentID() const
{
    return studentID;
}

std::string Student::setName(aName)
{
    name = aName;
}

std::string Student::setStudentID(aSID)
{
    studentID = aSID;
}

