/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on June 24, 2014, 9:34 PM
 * Purpose: Homework Assignment 1
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
//Define variables
    int numbPod, peaPerPd, totalP;
    
    //Enter in Values for Peas and Pods
    cout << "Hello.\n";
    cout << "Press RETURN after entering a number.\n";
    cout << "Enter number of Pods:\n";
    
    cin >> numbPod;
    
    cout << "Enter number of Peas in a Pod:\n";
    
    cin >> peaPerPd;
    
    //Calculate total peas
    totalP = numbPod / peaPerPd;
    
    //Output
    cout << "If you have ";
    cout << numbPod;
    cout << " pea pods\n";
    cout << "and ";
    cout << peaPerPd;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalP;
    cout << " peas in all the pods.\n";
    cout << "Goodbye!\n";
    
    //le FIN
    return 0;
}
