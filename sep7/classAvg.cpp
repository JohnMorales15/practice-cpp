//Calculate class average using sentinel-controlled iteration

#include <iostream>
#include <iomanip> // parameterized stream manipulator


int main()
{
    int total{0}; // running total of grades
    unsigned int gradeCounter{0}; // # of grades entered
    int grade{0};

    // prompt user to input grade and read grade
    std::cout << "Enter grade (enter negative number to quit): ";
    std::cin >> grade;

    //loop until sentinel value is entered by user
    while (grade > -1)
    {
        total += grade; // same as total = total + grade
        ++gradeCounter; // same as gradeCounter = gradeCounter + 1

        // prompt user to input grade and read grade
        std::cout << "Enter grade (enter negative number to quit): ";
        std::cin >> grade;
    }


    //if at least 1 grade entered
    if (gradeCounter != 0)
    {
        //use number with a decimal point to calc grade avg
        double average{static_cast<double>(total) / gradeCounter}; //double is a int with a decimal point

        //display output (with 2 digits of precision)
        std::cout << "\nTotal of the " << gradeCounter
                << "grades entered is. " << total;
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "\nClass average is: " << average << std::endl;
    }
    else
    {
        std::cout << "ERROR! No grades were entered" << std::endl;
    }


    return 0;
}