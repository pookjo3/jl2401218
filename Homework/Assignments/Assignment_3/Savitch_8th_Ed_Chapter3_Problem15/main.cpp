/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 2, 2014 10:41 AM
 * Savitch Chapter 3 Problem 15
 */

//System Libraries
#include <iostream>
#include <math.h>
using namespace std;

//Global Constants
const float SPECIFIC_W=62.4f;
const float PI=3.14159f;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Varables
    float boyF, vol, weight, radius;
    
    //Inputs
    cout<<"Boyancy Tester\n";
    cout<<"Input the weight in pounds: ";
    cin>>weight;
    cout<<"Input the radius in feet: ";
    cin>>radius;
    
    //Calculations
    vol=(4/3)*PI*pow(radius, 3);
    boyF=vol*SPECIFIC_W;
    
    //Output Loops
    if (boyF>weight){
        cout<<"The sphere will float.\n";
    }
    else
        cout<<"The sphere will sink.\n";
    //le Fin
    return 0;
}

