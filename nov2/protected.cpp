#include <iostream>

// Base class
class Employee
{
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee
{
  public:
    int bonus;
    void setSalary(int s)
	 {
      std::cout << "==> class Programmer: public Employee  setSalary(int s)\n    using protected member in class Employee\n";
      salary = s;
    }
    int getSalary()
	{
      std::cout << "==> class Programmer: public Employee  getSalary()\n";
      return salary;
    }
};

int main()
{
  Programmer myObj;

  myObj.setSalary(50000);
  myObj.bonus=15000;

  std::cout << "==> Salary: myObj.getSalary()\n";
  std::cout << "Salary: " << myObj.getSalary() << "\n";
  std::cout << "==> Bonus:  << myObj.bonus\n";
  std::cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
} 