//header file for Student class
#include <string>

class Student

{
public:

    explicit Student(int aSid, int aPhoneNum, std::string aFName, std::string aLName, std::string aAddress);

    //setters

    void setSid(int aSid);
    void setPhoneNum(int aPhoneNum);
    void setFName(std::string aFName);
    void setLName(std::string aLName);
    void setAddress(std::string aAddress);
    //void setDorm(bool aDorm);

    void setStudent();
    void setStudent1();

    //getters

    int getSid();
    int getPhoneNum();
    std::string getFName();
    std::string getLName();
    std::string getAddress();
    //bool getDorm();

    void getStudent();

private:
    int sid;
    int phoneNum;
    std::string fName;
    std::string lName;
    std::string address;
    //bool dorm;

};