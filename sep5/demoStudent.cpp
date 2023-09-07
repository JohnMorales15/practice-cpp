
#include <iostream>
#include "Student.h"


int main()
{
    // create student
    Student aStudent = Student(1,3151408,"Diane", "Ricciardella", "1380 Lawrence st");

    //check that it worked
    aStudent.getStudent();

    //create another student
    Student bStudent = Student(2, 3151404, "testfname", "testlname", "testaddress");

    bStudent.getStudent();

    //change that student
    bStudent.setStudent();

    std::cout << "\nLook closely at the output and the input" << std::endl;

    bStudent.getStudent(); // look closely at the output.

    bStudent.setStudent1("John"); // correcting the address problem

    bStudent.getStudent(); // problem is corrected.
    return 0;
};

