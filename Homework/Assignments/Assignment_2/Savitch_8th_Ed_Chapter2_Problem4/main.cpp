/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 2, 2014, 6:31 PM
 * Savitch Chapter 2 Problem 4
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float PAY_RISE = 7.6e-2; //Pay raise

//Function Prototypes

//Execution BEGINS
int main(int argc, char** argv) {
    //Define Variable
    float oldSal, newSal, payRet, monSal;
    int numbMon;
    
    //Inputs
    cout<<"What is your old salary?\n";
    cin>>oldSal;
    cout<<"How many months of retro active pay?\n";
    cin>>numbMon;
    
    //Calculations
    newSal = oldSal *(1+PAY_RISE);
    
    payRet = (newSal-oldSal)/(12/numbMon);
    
    monSal = newSal / 12;
    
    //Output
    cout<<"Retro Active Pay Due: $"<<payRet<<endl;
    cout<<"New Annual Salary:    $"<<newSal<<endl;
    cout<<"New Monthly Salary:   $"<<monSal<<endl;

    //le Fin
    return 0;
}