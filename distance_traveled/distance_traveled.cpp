#include <iostream> 
using namespace std ; 

float distance_traveled(int   time , float speed) { 
    
    float distance =  float(time) * speed ; 
    return distance ; 
}

int main () { 

    int time ; 
    float speed ; 
    while (true) {

        cout << "\n What is the speed of the the vehicle in mph ? " ; 
        cin  >> speed  ; 
        cout << "\n How many hours has it traveled ? " ; 
        cin  >>  time ; 
        cout << "\n Hour Distance Traveled"; 
        cout <<  "\n _________________________________________________" << endl ; 

        if (speed >= 1 && time >= 1 ) { 
            break ; 
        } else { 
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "\033[31m wrong input, please input a correct time and speed \033[0m" << endl;

        }

    }
  

    for (int i=1 ; i<=time ; i++) {
        cout << "   "<< i <<"       "<< distance_traveled( i , speed) << endl ; 
     }

    return 0 ; 
}