/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 1, 2014, 1:10 PM
 */

//System Libraries
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char** argv) {
    float intrate, payment,loanAmt;
    int nmbrPay;
  
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    
    cout<<"Enter loan amount: ";
    cin>>loanAmt;
    
    cout<<"Enter interest rate (per month): ";
    cin>>intrate;
    
    cout<<"Enter number of payments: ";
    cin>>nmbrPay;
    
    payment = (intrate * (pow((1+intrate), nmbrPay))/ ((pow((1+intrate), nmbrPay))-1))*loanAmt;

    cout<<"Your payment would be $"<<payment<<endl;
    
    return 0;
}

