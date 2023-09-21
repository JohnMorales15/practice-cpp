#include <iostream>
#include <string>
#include <iomanip>

// print number of stars given by user input

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;

    int count = 1;
    int num;
    cout << "Please enter a number of stars you would like to print: " << endl;
    cin >> num;

    /*while (count <= num)
    {
        cout << '*' << endl;
        count++;
    } */

    for (int i = 1; i <= num; i++)
    {
        cout << std::setw(num) << std::setfill('*');
        cout << '*' << endl;

    }

    // cout << std::setfill('*') << std::setw(count);
    // cout << '*' << endl;

    return 0;
}