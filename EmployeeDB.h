#ifndef EMPLOYEEDB_H
#define EMPLOYEEDB_H
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Employee.h"

//Employee Database class
class EmployeeDB
{
    vector<Employee> empVec;
    
    public: 
    
    void addEmployee(string name, int age, float salary, bool hc, bool nri){
        Employee newEmp(name, age, salary, hc, nri);
        empVec.push_back(newEmp);
    }

    void populateEmployeeDB(){
        ifstream fin("employeeDB.txt");
        string name;
        int age;
        float salary;
        bool hc;
        bool nri;
        if(fin.is_open())
        {
            while(fin)
            {
                fin >> name >> age >> salary >> hc >> nri; 
                addEmployee(name, age, salary, hc, nri);
            }
        }
        fin.close();
//         addEmployee("Afds", 30, 30, false, false);
//         addEmployee("Bss", 23, 10, true, false);
//         addEmployee("Dffss", 21, 20, false, true);
//         addEmployee("Gfss", 33, 23, false, true);
    }

    void displayEmployees(){
        for(auto &e: empVec){
            cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                 <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
        }
    }

    vector<Employee>::iterator getBeginIterator(){
        return empVec.begin();
    }

    vector<Employee>::iterator getEndIterator(){
        return empVec.end();
    }

    void filterByName(string substr){
        for(auto &e: empVec){
            if(e.getName().find(substr)!=string::npos){
                cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                 <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
            }
        }
    }

    void filterByHC(bool torf){
        for(auto &e: empVec){
            if(e.getHC()==torf){
                cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                 <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
            }
        }
    }

    void filterByNRI(bool torf){
        for(auto &e: empVec){
            if(e.getNRI()==torf){
                cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                 <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
            }
        }
    }

    void filterByAge(string rel, int age)
    {   
        if(rel=="less"){
            for(auto &e: empVec){
                if(e.getAge() < age){
                    cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                    <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
                }
             }
        }
        else if(rel=="greater")
        {
            for(auto &e: empVec){
                if(e.getAge() > age){
                    cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                    <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
                }
             }
        }
    }

    void filterBySalary(string rel, float salary)
    {   
        if(rel=="less"){
            for(auto &e: empVec){
                if(e.getSalary() < salary){
                    cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                    <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
                }
             }
        }
        else if(rel=="greater")
        {
            for(auto &e: empVec){
                if(e.getSalary() > salary){
                    cout <<"name: " << e.getName() << "\tage: " << e.getAge() << "\tsalary: " << e.getSalary()
                    <<"\tHC: " << e.getHC() << "\tNRI: " << e.getNRI() << endl;
                }
             }
        }
    }
};

#endif
