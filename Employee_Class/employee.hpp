#include <iostream> 
using namespace std; 

 class Employee { 
    private : 

        string name ; 
        int idNumber ; 
        string departement ; 
        string position ; 

    public: 

        //Default Constructor 
        Employee(); 

        // constructor 
        Employee( string newName , int newId , string newDepartement , string newPosition)  ; 

        //name accessors functions 
        string getName() ; 
        string setName(string name) ; 

        //id number accessors functions 
        int getID()  ; 
        int setID(int newId)  ; 

        // departement accessors functions 
        string getDepartement() ; 
        string setDepartement() ; 

        //postion accessors functions 
        string getPosition(); 
        string setPosition(); 








};