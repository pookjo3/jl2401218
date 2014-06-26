/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on June 25, 2014, 1:37 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Funtion Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    char letter;
    
    //Inputs
    cout << "Please input ONE character: \n";
    cin >> letter;
    
    //Outputs
    cout << "\n";
    cout << "   " << letter << letter << letter << "\n";
    cout << "  " << letter << "  " << letter << "\n";
    cout << " " << letter << "\n";
    cout << " " << letter << "\n";
    cout << " " << letter << "\n";
    cout << "  " << letter << "  "  << letter << "\n";
    cout << "   " << letter << letter << letter << "\n";
    
    //le Fin
    return 0;
}

