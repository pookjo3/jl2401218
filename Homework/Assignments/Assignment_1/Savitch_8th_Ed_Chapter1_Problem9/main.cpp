/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on June 25, 2014, 12:35 AM
 * Purpose: Homework Assignment 1
 */
//System Libraries
#include <math.h>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//EXECUTE THE EXECUTABLE!
int main(int argc, char** argv) {
    //Define Variables
    short grav = 32;
    unsigned int time;
    float dist;
    
    //Inputs
    cout << "Enter time in seconds:\n";
    cin >> time;
    
    //Calculate values
    dist = grav * pow (time, 2);
    dist = dist / 2;
    
    //Output
    cout << "The distance traveled would be " << dist << "\n";
    
    //le Fin
    return 0;
}

