/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 1, 2014, 11:52 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float   faceVal, //Face value of the loan
            amtNeed, //Amount needed for the costumer
            interest,//Yearly interest
            loanPrd, //The length of the payment period in months
            mnthPay; //Monthly Payment
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Inputs
    cout<<"Consumer Loan Calculator\n";
    cout<<"How much money do you need?\n";
    cin>>amtNeed;
    cout<<"What is the duration of the payments in months?\n";
    cin>>loanPrd;
    cout<<"What is the interest in %?"<<endl;
    cin>>interest;
    
    //Calculations
    float temp = loanPrd/12;
    
    interest=interest/100;
    
    faceVal=(amtNeed)/(1-(interest*temp));
    
    mnthPay = faceVal/loanPrd;
    
    //Output
    cout<<"The face value of the loan must be $"<<faceVal<<" in order to get $"<<amtNeed<<endl;
    
    cout<<"The monthly payment for that loan would be $"<<mnthPay<<endl;

    return 0;
}

