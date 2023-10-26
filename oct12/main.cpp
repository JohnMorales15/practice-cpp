#include <string>
    using std::string;
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include "new.cpp"

int main()
{
    int a{0};
    int b{0};

    cout << "Please enter a number that you would like to work with: ";
    cin >> a;
    cout << "Now enter a number you would like to use to manipulate your number: ";
    cin >> b;

    cout << "Here are your numbers: " << a << endl;


    return 0;
}