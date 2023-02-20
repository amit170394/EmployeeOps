#include "EmployeeDB.h"
#include <iostream>
#include <fstream>
#include <sstream>

void EmployeeDB::addEmployee(string name, int age, float salary, bool hc, bool nri){
    Employee newEmp(name, age, salary, hc, nri);
    empVec.push_back(newEmp);
}

void EmployeeDB::populateEmployeeDB(){
    ifstream fin("employeeDB.txt");
    string name;
    int age;
    float salary;
    bool hc;
    bool nri;
    if(fin.is_open())  
    {
        while(fin >> name >> age >> salary >> hc >> nri)  //why this is done => https://stackoverflow.com/questions/42045751/why-is-the-last-line-of-my-input-file-running-twice
        {
            addEmployee(name, age, salary, hc, nri);
        }
    }
    fin.close();
}

vector<Employee>::iterator EmployeeDB::getBeginIterator(){
    return empVec.begin();
}

vector<Employee>::iterator EmployeeDB::getEndIterator(){
    return empVec.end();
}

void EmployeeDB::displayAllEmployees(){
    for(auto &e: empVec){
        cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                 <<"\tHC: " << e.isHC() << "\tNRI: " << e.isNRI() << endl;
    }
}

void EmployeeDB::filterEmployees(string filterParameter, string criteria){
    for(auto &e: empVec){
        bool cond=true;
        if(filterParameter=="name")
            cond = e.getName().find(criteria)!=string::npos;
        else if(filterParameter=="HC")
        {
            bool strToBool;
            istringstream(criteria) >> strToBool;
            cond = e.isHC()==strToBool;
        }
        else if(filterParameter=="NRI")
        {
            bool strToBool;
            istringstream(criteria) >> strToBool;
            cond = e.isNRI()==strToBool;
        }
        else if(filterParameter=="age"){
            string rel, val;
            istringstream(criteria) >> rel >> val;
            int age = stoi(val);
            if(rel=="less")
                cond = e.getAge() < age;
            else if(rel=="greater")
                cond = e.getAge() > age;
            else if(rel=="equal")
                cond = e.getAge() == age;
        }
        else if(filterParameter=="salary")
        {
            string rel, val;
            istringstream(criteria) >> rel >> val;
            float salary = stof(val);
            if(rel=="less")
                cond = e.getSalary() < salary;
            else if(rel=="greater")
                cond = e.getSalary() > salary;
            else if(rel=="equal")
                cond = e.getSalary() == salary;
        }

        if(cond)
            cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                 <<"\tHC: " << e.isHC() << "\tNRI: " << e.isNRI() << endl;
    }
}