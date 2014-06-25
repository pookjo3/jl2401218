/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on June 25, 2014, 12:12 AM
 * Purpose: Homework Assignment 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Time to Execute!
int main(int argc, char** argv) {

    //Define Variables
    int int1, int2, sum, product;
    
    //Input Values
    cout << "Please input value for int1:\n";
    cin >> int1;
    
    cout << "Please input value for int2:\n";
    cin >> int2;
    
    //Solve for Sum and Product
    sum = int1 + int2;
    product = int1 * int2;
    
    //Output Values
    cout << "The sum of the two integers is " << sum << "\n";
    cout << "The product of the two integers is " << product << "\n";
    
    return 0;
}

