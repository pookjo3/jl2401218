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
    char sex, act;
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
    
    cout<<"Would you consider yourself Sedentary [1], Somewhat Active [2], Active [3], Highly Active [4]? ";
    cin>>act;
    
    
    if(sex=='f'||sex=='F'){
        if (act=='1'){
            bmr=(655+4.3*weight+4.7*height-4.7*age)*1.2f;
        }else if (act=='2'){
            bmr=(655+4.3*weight+4.7*height-4.7*age)*1.3f;
        }else if (act=='3'){
            bmr=(655+4.3*weight+4.7*height-4.7*age)*1.4f;
        }else if (act=='4'){
            bmr=(655+4.3*weight+4.7*height-4.7*age)*1.5f;
        }else {
            bmr=655+4.3*weight+4.7*height-4.7*age;
        }
    }else if(sex=='m'||sex=='M'){
        if (act=='1'){
            bmr=(66+6.3*weight+12.9*height-4.7*age)*1.2f;
        }else if (act=='2'){
            bmr=(66+6.3*weight+12.9*height-4.7*age)*1.3f;
        }else if (act=='3'){
            bmr=(66+6.3*weight+12.9*height-4.7*age)*1.4f;
        }else if (act=='4'){
            bmr=(66+6.3*weight+12.9*height-4.7*age)*1.5f;
        }else {
            bmr=66+6.3*weight+12.9*height-4.7*age;
        }
    }else{
        cout<<"Please enter either M or F.";
    }
    cndybar=bmr/calCBar;
            
    cout<<"Your BMR is "<<bmr<<endl;
    cout<<"You can eat "<<cndybar<<" candy bars."<<endl;
    
    return 0;
}