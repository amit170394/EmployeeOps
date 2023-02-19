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
    Employee(string name, int age, float salary, bool hc, bool nri): 
        name(name), age(age), salary(salary), hc(hc), nri(nri)
    {
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    float getSalary()
    {
        return salary;
    }

    bool getHC()
    {
        return hc;
    }

    bool getNRI()
    {
        return nri;
    }
};

#endif