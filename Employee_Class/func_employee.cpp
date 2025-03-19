#include <iostream> 
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