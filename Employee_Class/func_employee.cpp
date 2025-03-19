#include <iostream>
#include <iomanip> 
#include "employee.hpp"


//Default constructor 
Employee::Employee(){ 
    name = "" ; 
    idNumber = 0 ; 
    department = ""; 
    position = "" ; 
}

//  1st Cosntructor 
Employee::Employee( string newName , int newId , string newDepartement , string newPosition) { 
    name = newName ; 
    idNumber = newId ; 
    department = newDepartement; 
    position = newPosition; 
}

// 2nd Constructor 

Employee::Employee(string newName , int newId) { 
    name = newName ;
    idNumber = newId ; 
    department = ""; 
    position  = "" ; 
}

// Accessor functions : getter

string Employee::getName() { 
    return name ; 
}

int Employee::getID() { 
    return idNumber; 
}

string Employee::getDepartment(){ 
    return department; 
}

string Employee::getPosition(){ 
    return position; 
}

// Accessor functions : setter 

void Employee::setName(string newName) { 
    name = newName ; 
}

void Employee::setID(int newID) { 
    idNumber = newID; 
}

void Employee::setDepartment( string newDepartment) { 
    department = newDepartment; 
}

void Employee::setPosition(string newPosition) { 
    position = newPosition; 
}

// display employee 

void Employee::display() { 
    cout << left << setw(20) << name 
         << setw(15) << idNumber 
         << setw(20) << department 
         << setw(20) << position << endl; 
}

void displayHeader() { 
    cout << "_________________________________________________________________________________________" << endl;
    cout << left << setw(20) << "Name" 
         << setw(15) << "ID Number" 
         << setw(20) << "Department" 
         << setw(20) << "Position" << endl; 
    cout << "_________________________________________________________________________________________" << endl;
}