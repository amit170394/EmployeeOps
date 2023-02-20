# EmployeeOps

To compile:
    g++ -o ops main.cpp OperationsEmployeeDB.cpp Employee.cpp EmployeeDB.cpp
    
To run examples:
    ./ops sort name ASC
    ./ops sort age DESC
    ./ops filter age less than 20
    ./ops filter age equal to 20
    ./ops filter salary greater than 30
    ./ops filter HC true
