#include <iostream> 
using namespace std; 

 class Employee { 
    private : 

        string name ; 
        int idNumber ; 
        string department ; 
        string position ; 

    public: 

        //Default Constructor 
        Employee(); 

        // 1st Constructor 
        Employee( string newName , int newId , string newDepartment , string newPosition)  ; 

        // 2nd Constructor 
        Employee(string newName , int newId) ; 

        //name accessors functions 
        string getName() ; 
        void  setName(string newName) ; 

        //id number accessors functions 
        int getID()  ; 
        void setID(int newId)  ; 

        // departement accessors functions 
        string getDepartment() ; 
        void setDepartment(string newDepartment) ; 

        //postion accessors functions 
        string getPosition(); 
        void  setPosition(string newPosition); 

        void display(); 

};

void displayHeader() ; 