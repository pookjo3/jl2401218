/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Assignment 6
 * Created on July 24, 2014, 11:31 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void Menu();
int getN();

//Execution begins
int main(int argc, char** argv) {
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1: problem1();break;
            case 2: problem2();break;
            case 3: problem3();break;
            case 4: problem4();break;
            case 5: problem5();break;
            case 6: problem6();break;
            case 7: problem7();break;
            case 8: problem8();break;
            case 9: problem9();break;
            case 10: problem10();break;
            default:;
        };
    }while(inN>0);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 0 to exit"<<endl;
}

//Choose problem number function
int getN(){
        int inN;
        cin>>inN;
        return inN;
}

//Problem 1
void problem1(){
    //Declare Variables
    const int SIZE=10;
    int array[SIZE];
    int highest=0, lowest = 2e9;
    
    for (int i=0; i<SIZE; i++){
        cout<<"Please enter value "<<i+1<<": ";
        cin>>array[i];
        if (array[i]>highest){
            highest=array[i];
        }
        if (array[i]<lowest){
            lowest = array[i];
        }
    }
    cout<<"Largest value: "<<highest<<endl;
    cout<<"Smallest value: "<<lowest<<endl;
    cout<<endl;
}

//Problem 2
void problem2(){
    //Declare Variables
    const int YEAR=12;
    string month[YEAR] = { "January", "February", "March", "April", "May", "June", 
                         "July", "August", "September", "October", "November", "December" };
    float rain[YEAR];
    float total=0, average, lowest=2e9, highest=0;
    
    //Loop for inputs
    for (int i=0; i<YEAR; i++){
        cout<<"Enter the rainfall for "<<month[i]<<": ";
        cin>>rain[i];
        if (rain[i]>highest){
            highest=rain[i];
        }
        if (rain[i]<lowest){
            lowest = rain[i];
        }
        total+=rain[i];
    }
    average = total/static_cast<float>(YEAR);
    
    cout<<"Total Rainfall: "<<total<<endl;
    cout<<"Average Rainfall per month: "<<average<<endl;
    cout<<"Highest Rainfall: "<<highest<<endl;
    cout<<"Lowest Rainfall: "<<lowest<<endl;
    cout<<endl;
}

//Problem 3
void problem3(){
    const int SIZE=5;
    string salsa[SIZE]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jars[SIZE];
    int total=0, highest=0, lowest=1e9, highN, lowN;
    
    for (int i=0; i<SIZE; i++){
        cout<<"Please enter the number of jars sold of the "<<salsa[i]<<" salsa: ";
        cin>>jars[i];
        if (jars[i]>highest){
            highest=jars[i];
            highN=i;
        }
        if (jars[i]<lowest){
            lowest=jars[i];
            lowN=i;
        }
        total+=jars[i];
    }
    for (int i = 0; i<SIZE; i++){
        cout<<salsa[i]<<" salsa: "<<jars[i]<<" jars"<<endl;
    }
    cout<<"Total Salsa Sold: "<<total<<" jars"<<endl;
    cout<<"Best Selling Salsa: "<<salsa[highN]<<endl;
    cout<<"Worst Selling Salsa: "<<salsa[lowN]<<endl<<endl;
}
void problem4(){
    //Declare Variables
    const int MONKEY=3, DAYS=7;
    int food[MONKEY][DAYS];
    
}
void problem5(){
    
}
void problem6(){
    
}
void problem7(){
    
}
void problem8(){
    
}
void problem9(){
    
}
void problem10(){
    
}