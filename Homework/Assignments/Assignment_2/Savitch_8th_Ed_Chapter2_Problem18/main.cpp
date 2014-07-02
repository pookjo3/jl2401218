/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 1, 2014, 12:30 PM
 */

//System Library
#include <iostream>
using namespace std;

//User Library

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
//Declare Variables
    unsigned short weight, age, height, calCBar;
    char sex;
    float bmr, cndybar;
    
    cout<<"Please enter the calories of your chosen calories: ";
    cin>>calCBar;
    
    cout<<"Please enter your weight in pounds: ";
    cin>>weight;
    
    cout<<"Please enter your height in inches: ";
    cin>>height;
    
    cout<<"Please enter your age in years: ";
    cin>>age;
    
    cout<<"Are you a male or a female? [M/F] ";
    cin>>sex;
    
    if(sex=='f'||sex=='F'){
        bmr=655+4.3*weight+4.7*height-4.7*age;
                
    }else if(sex=='m'||sex=='M'){
        bmr=66+6.3*weight+12.9*height-4.7*age;
    }else{
        cout<<"Please enter either M or F.";
    }
    cndybar=bmr/calCBar;
            
    cout<<"Your BMR is "<<bmr<<endl;
    cout<<"You can eat "<<cndybar<<" candy bars."<<endl;
    
    return 0;
}

