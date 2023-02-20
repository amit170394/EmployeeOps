#include "Employee.h"

Employee::Employee(string name, int age, float salary, bool hc, bool nri): 
        name(name), age(age), salary(salary), hc(hc), nri(nri)
{
}

string Employee::getName()
{
    return name;
}

int Employee::getAge()
{
    return age;
}

float Employee::getSalary()
{
    return salary;
}

bool Employee::isHC()
{
    return hc;
}

bool Employee::isNRI()
{
    return nri;
}