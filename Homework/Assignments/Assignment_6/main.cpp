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
    float food[MONKEY][DAYS];
    float avg, least=1e8, great=0, total=0;
    
    //Loop to input for monkey 1
    for (int i=0; i<DAYS; i++){
        cout<<"Please input the amount of food eaten by monkey 1 on day "<<i+1<<":"<<endl;
        cin>>food[0][i];
        if (food[0][i]>great){
            great=food[0][i];
        }
        if (food[0][i]<least){
            least=food[0][i];
        }
        total+=food[0][i];
    }
    //Loop to input for monkey 2
    for (int i=0; i<DAYS; i++){
        cout<<"Please input the amount of food eaten by monkey 2 on day "<<i+1<<":"<<endl;
        cin>>food[1][i];
        if (food[1][i]>great){
            great=food[1][i];
        }
        if (food[1][i]<least){
            least=food[1][i];
        }
        total+=food[1][i];
    }
    //Loop to input for monkey 3
    for (int i=0; i<DAYS; i++){
        cout<<"Please input the amount of food eaten by monkey 3 on day "<<i+1<<":"<<endl;
        cin>>food[2][i];
        if (food[2][i]>great){
            great=food[2][i];
        }
        if (food[2][i]<least){
            least=food[2][i];
        }
        total+=food[2][i];

    }
    avg=total/21;
    cout<<"Average Food Eaten: "<<avg<<" Pounds"<<endl;
    cout<<"Least Amount Eaten: "<<least<<" Pounds"<<endl;
    cout<<"Most Amount Eaten:  "<<great<<" Pounds"<<endl<<endl;
}       
void problem5(){
    //Declare Variables
    const int DIV=6, QUART=4;
    float sales[DIV][QUART];
    float tot=0, incC, highest=0, highD;
    
    cout<<"Quarter 1:"<<endl;
    
    for (int i=0; i<DIV; i++){
        cout<<"What were the sales for Division "<<i+1<<"?"<<endl;
        cin>>sales[i][0];
        tot+=sales[i][0];
        
        if (sales[i][0]>highest){
            highest=sales[i][0];
            highD=i+1;
        }
    }
    for (int i=0; i<DIV; i++){
        cout<<"Sales for Division "<<i+1<<": $"<<sales[i][0]<<endl;
    }
    cout<<"Total Sales in Quarter 1: $"<<tot<<endl;
    cout<<"Division "<<highD<<" had the highest sales."<<endl;
    
    cout<<"Quarter 2"<<endl;
    tot=0; highest=0;
    
    for (int i=0; i<DIV; i++){
        cout<<"What were the sales for Division "<<i+1<<"?"<<endl;
        cin>>sales[i][1];
        tot+=sales[i][1];
        
        if (sales[i][1]>highest){
            highest=sales[i][1];
            highD=i+1;
        }
    }
    for (int i=0; i<DIV; i++){
        cout<<"Sales for Division "<<i+1<<": $"<<sales[i][1]<<endl;
        cout<<"Change for Division "<<i+1<<":$"<<sales[i][1]-sales[i][0]<<endl;
    }
    cout<<"Total Sales in Quarter 2: $"<<tot<<endl;
    cout<<"Average Sales: $"<<tot/6<<endl;
    cout<<"Division "<<highD<<" had the highest sales."<<endl;
    
    cout<<"Quarter 3"<<endl;
    tot=0; highest=0;
    
    for (int i=0; i<DIV; i++){
        cout<<"What were the sales for Division "<<i+1<<"?"<<endl;
        cin>>sales[i][2];
        tot+=sales[i][2];
        
        if (sales[i][2]>highest){
            highest=sales[i][2];
            highD=i+1;
        }
    }
    for (int i=0; i<DIV; i++){
        cout<<"Sales for Division "<<i+1<<": $"<<sales[i][2]<<endl;
        cout<<"Change for Division "<<i+1<<":$"<<sales[i][2]-sales[i][1]<<endl;
    }
    cout<<"Total Sales in Quarter 3: $"<<tot<<endl;
    cout<<"Average Sales: $"<<tot/6<<endl;
    cout<<"Division "<<highD<<" had the highest sales."<<endl;
    
    cout<<"Quarter 4"<<endl;
    tot=0; highest=0;
    
    for (int i=0; i<DIV; i++){
        cout<<"What were the sales for Division "<<i+1<<"?"<<endl;
        cin>>sales[i][3];
        tot+=sales[i][3];
        
        if (sales[i][2]>highest){
            highest=sales[i][3];
            highD=i+1;
        }
    }
    for (int i=0; i<DIV; i++){
        cout<<"Sales for Division "<<i+1<<": $"<<sales[i][3]<<endl;
        cout<<"Change for Division "<<i+1<<":$"<<sales[i][3]-sales[i][2]<<endl;
    }
    cout<<"Total Sales in Quarter 4: $"<<tot<<endl;
    cout<<"Average Sales: $"<<tot/6<<endl;
    cout<<"Division "<<highD<<" had the highest sales."<<endl;
}
void problem6(){
    //Declare Variables
    const int SIZE=7;
    int empID[SIZE]={5458845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[SIZE];
    float payRate[SIZE];
    float wages[SIZE];
    
    for (int i=0; i<SIZE; i++){
        cout<<"Please enter hours worked by employee #"<<empID[i]<<": ";
        cin>>hours[i];
        
        cout<<"Please enter the Pay Rate for employee #"<<empID[i]<<": ";
        cin>>payRate[i];
        
        wages[i]=hours[i]*payRate[i];
    }
    for (int i=0; i<SIZE; i++){
        cout<<empID[i]<<":"<<setw(7)<<"$"<<wages[i]<<endl;
    }
}
void problem7(){
    //Variables
    const int SIZE=20;
    char correct[SIZE]={'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    char answer[SIZE];
    int inC[SIZE];
    int wrong;
    
    for (int i=0; i<SIZE; i++){
        cout<<"Please input answer for Question "<<i+1<<": ";
        cin>>answer[i];
        if (!(answer[i]==correct[i])){
            wrong++;
            inC[]
        }
    }
}
void problem8(){
    
}
void problem9(){
    
}
void problem10(){
    
}