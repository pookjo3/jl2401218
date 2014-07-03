/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 2, 2014
 * Savitch Chapter 2 Problem 10
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float PAY_RISE = 7.6e-2; //Pay raise

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     //Define Variable
    float oldSal, newSal, payRet, monSal;
    
    //Inputs
    cout<<"What is your old salary?\n";
    cin>>oldSal;
        
    //Calculations
    newSal = oldSal *(1+PAY_RISE);
    
    payRet = (newSal-oldSal)/(12/6);
    
    monSal = newSal / 12;
    
    //Output
    cout<<"Retro Active Pay Due: $"<<payRet<<endl;
    cout<<"New Annual Salary:    $"<<newSal<<endl;
    cout<<"New Monthly Salary:   $"<<monSal<<endl;

    //le Fin
    return 0;
}
