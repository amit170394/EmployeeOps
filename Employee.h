#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

//Employee class
class Employee
{
    string name;
    int age;
    float salary;
    bool hc;
    bool nri;

    public:
    Employee(string name, int age, float salary, bool hc, bool nri);

    string getName();
    int getAge();
    float getSalary();
    bool isHC();
    bool isNRI();
};

#endif