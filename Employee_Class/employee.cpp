#include <iostream> 
#include "employee.hpp"
using namespace std ; 


int main () { 
    displayHeader(); 
    Employee susan; 
     

    Employee mark("Mark Jones" , 39119 , "IT" , "Prpgrammer") ; 
    mark.display() ; 

    Employee joy("Joy Rogers",81774); 
    joy.display();

    susan.setName("Susan Meyers") ; 
    susan.display();
    
}
