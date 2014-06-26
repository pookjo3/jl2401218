/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on June 25, 2014, 10:44 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Included libraries

//Global Constants

//Function Prototypes

//Execution time!
int main(int argc, char** argv) {
//Define Variables
    float qtrval = .25f, nklval = .05f, dimval = .10f, total, penval = .01f;
    int numqtr, numnkl, numdim, numpen;
    
    //Inputs
    cout << "Please input number of quarters: \n";
    cin >> numqtr;
    
    cout << "Please input number of dimes: \n";
    cin >> numdim;
    
    cout << "Please input number of nickels: \n";
    cin >> numnkl;
    
    cout << "Please input number of pennies: \n";
    cin >> numpen;
    
    //Calculations
    
    total = (numqtr * qtrval) + (numdim * dimval) + (numnkl * nklval) + (numpen * penval);
            
    //Outputs
    cout << "The total value is $" << total << " dollars.\n";
    
    //le Fin
    
    return 0;
}

