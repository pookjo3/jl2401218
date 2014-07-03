/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 2, 2014
 * Savitch Chapter 2 Problem 11
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    int posSum, negSum, totSum, numPos, numNeg;
    float posAvg, negAvg, totAvg;
    int i = 0; //Counter variable
    //Loop 10 times and prompt user for numbers
    while (i < 10){
        int temp;
        cout<<"Please input a positive negative or zero number: ";
        cin>>temp;
        totSum += temp;
        if(temp > 0){
            posSum += temp;
            numPos++;
        }else if(temp < 0){
            negSum += temp;
            numNeg++;
        }
        i++;
    
    }
    //Calculate Averages
        posAvg=static_cast<float>(posSum)/numPos;
        negAvg=static_cast<float>(negSum)/numNeg;
        totAvg=static_cast<float>(totSum)/10;
        
    //Display Results
    cout<<"Sum of Positive Numbers:        "<<posSum<<endl;
    cout<<"Sum of Negative Numbers:        "<<negSum<<endl;
    cout<<"Sum of All Numbers:             "<<totSum<<endl;
    cout<<"Average of all Positive Numbers:"<<posAvg<<endl;
    cout<<"Average of all Negative Numbers:"<<negAvg<<endl;
    cout<<"Average of all Numbers:         "<<totAvg<<endl;
    //Exit
    return 0;
}