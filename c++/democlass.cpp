#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    string company;
    int age;

    void introduceYourself()
    {
        std::cout<< "My name is "<<name<<std::endl;

    }


};


int main()
{
    Employee emp;
    emp.name = "hemanth";
    emp.introduceYourself();
    return 0;
}