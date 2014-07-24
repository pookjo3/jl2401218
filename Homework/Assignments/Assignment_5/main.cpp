/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 *
 * Created on July 23, 2014, 11:17 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const float GRAV=9.8f;

//Function Prototypes
void Menu();
int getN();
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
void calcRetail(float, float);
float getLength();
float getWidth();
float getArea(float, float);
void displayData(float, float, float);
float getSale(string);
void findHighest(float, float, float, float, float);
int getAccident(string);
void findLowest (int,int,int,int,int,int);
void fallDistance(int);
void kineticEnergy(float,float);
void celsius(int);
void coinToss(int);
void presentValue(float,float,int);
int getScore();
void calcAverage(int);
int findLowest(int,int);


//Execution Begins
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
    }while(inN<11&&inN>0);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1 from Gaddis"<<endl;
    cout<<"Type 2 for problem 2 from Gaddis"<<endl;
    cout<<"Type 3 for problem 3 from Gaddis"<<endl;
    cout<<"Type 4 for problem 4 from Gaddis"<<endl;
    cout<<"Type 5 for problem 5 from Gaddis"<<endl;
    cout<<"Type 6 for problem 6 from Gaddis"<<endl;
    cout<<"Type 7 for problem 7 from Gaddis"<<endl;
    cout<<"Type 8 for problem 8 from Gaddis"<<endl;
    cout<<"Type 9 for problem 9 from Gaddis"<<endl;
    cout<<"Type 10 for problem 10 from Gaddis"<<endl;
    cout<<"Type 0 or 11 to exit"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Problem 1 Gaddis Solution
void problem1(){
    //Declare Variables
    float whSale;               //wholesale price
    float perc;                 //Mark up percentage
    
    //Ask for inputs
    cout << setprecision(2) << fixed << showpoint;
    
    cout<<"What is the wholesale price of the product?"<<endl;
    cin>>whSale;
    cout<<"What is the markup in percents?"<<endl;
    cin>>perc;
    
    calcRetail(whSale, perc);
    
    
}
//Calculate Retail Function
float calcRetail(float whSale, float perc){
    //Declare return variable
    float retail;
        retail = whSale + (whSale * (perc/100.0f));
    cout<<"The retail price is $"<<retail<<endl<<endl;
}
//Problem 2 Solution
void problem2(){
    //Define Variables
    float length, width, area;
    cout<<"Calculate Area of a Rectange."<<endl;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
}
float getLength(){
    float length;
    cout<<"What is the length?"<<endl;
    cin>>length;
    return length;
}
float getWidth(){
    float width;
    cout<<"What is the width?"<<endl;
    cin>>width;
    return width;
}
float getArea(float width, float length){
    float area;
    area = length*width;
    return area;
}
void displayData(float length, float width, float area){
    cout<<"The area of a "<<length<<"x"<<width<<" rectangle is "<<area<<endl<<endl;
}
//Problem 3 Solution
void problem3(){
    //Declare Variables
    string div;
    float saleNW=0, saleNE=0, saleSE=0, saleSW=0, highest=0;
    
    //Pass division to function
    div = "Northwest";
    saleNW = getSale(div);
    
    highest=saleNW;
    
    div = "Soutwest";
    saleSW = getSale(div);
    
    if (highest<saleSW){
        highest=saleSW;
    }
    
    div = "Northeast";
    saleNE = getSale(div);
    
    if (highest<saleNE){
        highest=saleNE;
    }
    
    div = "Southeast";
    saleSE = getSale(div);
    
    if (highest<saleSE){
        highest=saleSE;
    }
     
    findHighest(saleNW, saleNE, saleSE, saleSW, highest);
}
float getSale(string div){
    float sale;
    cout<<"What were the quarterly sales for the "<<div<<" division?"<<endl;
    cin>>sale;
    return sale;
}
void findHighest(float saleNW, float saleNE, float saleSE, float saleSW, float highest){
    if (highest==saleNW){
        cout<<"The Northwest division had the highest sales"<<endl<<endl;
    }else if (highest==saleNE){
        cout<<"The Northeast division had the highest sales"<<endl<<endl;
    }else if (highest==saleSE){
        cout<<"The Southeast division had the highest sales"<<endl<<endl;
    }else if (highest==saleSW){
        cout<<"The Southwest division had the highest sales"<<endl<<endl;
    }
}
//Problem 4 Solution
void problem4(){
    //Declare Variables
    string div;
    int accN,accS,accW,accE,accC,lowest;
    
    div = "North";
    accN = getAccident(div);    //Get number of accidents
    
    lowest=accN;
    
    div = "South";
    accS = getAccident(div);
    
    if (lowest>accS){           //Test if its lower than the value before it
        lowest=accS;
    }
    
    div = "East";
    accE = getAccident(div);
    
    if (lowest>accE){
        lowest=accE;
    }
    
    div = "West";
    accW = getAccident(div);
    
    if (lowest>accW){
        lowest=accW;
    }
    
    div = "Central";
    accC = getAccident(div);
    
    if (lowest>accC){
        lowest=accC;
    }
    
    findLowest(accN,accS,accW,accE,accC,lowest);
}
int getAccident(string div){
    float acc;
    cout<<"What were the number of accidents for the "<<div<<" division?"<<endl;
    cin>>acc;
    return acc;
}
void findLowest(int accN,int accS,int accE,int accW,int accC,int lowest){
    if (lowest==accN){
        cout<<"The North region is the safest place to drive"<<endl<<endl;
    }else if (lowest==accS){
        cout<<"The South region is the safest place to drive"<<endl<<endl;
    }else if (lowest==accE){
        cout<<"The East region is the safest place to drive"<<endl<<endl;
    }else if (lowest==accW){
        cout<<"The West region is the safest place to drive"<<endl<<endl;
    }else if (lowest==accC){
        cout<<"The Central region is the safest place to drive"<<endl<<endl;
    }
}
//Problem 5 Solution
void problem5(){
    //Declare Variables
    int time=0;
    
    for (int i=1; i<=10; i++){  //Loop 10 times
        time = i;
        fallDistance(i);    //Solve for and output distance fallen after i seconds
    }
    cout<<endl;
}
void fallDistance(int i){
    float distance;
    distance = .5f*GRAV*i*i;
    cout<<"The distance fallen in "<<i<<" seconds is "<<distance<<" meters"<<endl;
}
//Problem 6 Solution
void problem6(){
    //Declare Variables
    float vel, mass;
    
    //Prompt for inputs
    cout<<"Please enter the mass (in kg): ";
    cin>>mass;
    cout<<"Please enter the velocity (in m/s): ";
    cin>>vel;
    
    {
        kineticEnergy(mass, vel);       //Solve and output Kinetic Energy
    }
}
void kineticEnergy(float mass,float vel){
    float KE;
    KE=.5f*mass*vel*vel;
    cout<<"The kinetic engergy of an object with mass "<<mass<<" kg and velocity"<<endl;
    cout<<vel<<" m/s is "<<KE<<" Joules."<<endl<<endl;
    
}
//Problem 7 Solution
void problem7(){
    //Declare Variables
    int tempF;    //Temperature in Fahrenheit
    
    for(int i=0; i<=20; i++){
        tempF=i;
        celsius(i);
    }
    cout<<endl;
}
void celsius(int i){
    float tempC;    //Temperature in Celsius
    
    tempC = (static_cast<float>(i)-32)*(5/9.0f);
    cout<<i<<" degrees Fahrenheit is equivalent to "<<tempC<<" degrees Celsius."<<endl;
}
//Problem 8 Solution
void problem8(){
    //Declare variables
    int toss;   //Number of tosses
    int coin;   //Value of coin
    srand(static_cast<unsigned int>(time(0)));
    cout<<"How many tosses?"<<endl;
    cin>>toss;
    
    for (int i=1; i<=toss; i++){ //Toss the coin the desired amount
        coin=rand()%2;
        coinToss(coin);
    }
    cout<<endl;
}
void coinToss(int coin){
    if (coin==1){
        cout<<"Heads"<<endl;
    }else if (coin==0){
        cout<<"Tails"<<endl;
    }
}
//Problem 9 Solution
void problem9(){
    //Declare Variables
    float futVal, intRate;   //Future value
    int years;               //Interest rate and years
    
    cout<<"What is your goal amount for the future?"<<endl;
    cin>>futVal;
    cout<<"What is the interest rate annually? (In %)"<<endl;
    cin>>intRate;
    cout<<"How many years do you want to wait?"<<endl;
    cin>>years;
    
    intRate/=100.0f;
    presentValue(futVal,intRate,years);
    cout<<endl;
}
void presentValue(float futVal,float intRate, int years){
    float presVal;
    
    presVal = (futVal/(pow(1+intRate, years)));
    
    cout<<"The amount of money required today would be $"<<presVal<<endl;
}
//Problem 10 Solution
void problem10(){
    //Declare Variables
    int total;
    
    total = getScore();
    calcAverage(total);
    cout<<endl;
}
int getScore(){
    int score, sum=0, lowest=100;
    
    for (int i=1; i<6; i++){
        cout<<"What is the score for test "<<i<<"?"<<endl;
        cin>>score;
        lowest = findLowest(score, lowest);
        sum+=score;
    }
    sum-=lowest;
    return sum;
}
int findLowest(int score, int lowest){
    if (score<lowest){
        lowest = score;
    }
    return lowest;
}
void calcAverage(int total){
    float avg;
    
    avg = total/4.0f;
    
    cout<<"The average of the four highest test scores is "<<avg<<endl;
}