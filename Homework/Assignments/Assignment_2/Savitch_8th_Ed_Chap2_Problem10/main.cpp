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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    int posSum, negSum, totSum;
    int i = 0; //Counter variable
    //Loop 10 times and prompt user for numbers
    while (i < 10){
        int temp;
        cout<<"Please input a positive negative or zero number: ";
        cin>>temp;
        totSum += temp;
        if(temp > 0){
            posSum += temp;
        }else{
            negSum += temp;
        }
        i++;
    }
    
    //Display Results
    cout<<"Sum of Positive Numbers: "<<posSum<<endl;
    cout<<"Sum of Negative Numbers: "<<negSum<<endl;
    cout<<"Sum of All Numbers:      "<<totSum<<endl;
    //Exit
    return 0;
}