//Jonathon J. Lisonbee
//July 14th, 2014
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
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
            default:;
        };
    }while(inN<7);
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
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    //Define Variables
    unsigned int input;
    
    //Ask for inputs
    cout<<"Please choose a positive number to display the countdown."<<endl;
    cin>>input;
    cout<<endl;
    
    //Start the loop to display
    for (int i = input; i>0; i--){
        cout<<setw(i)<<i<<endl;
    }
    cout<<endl;
}

//Solution to problem 2
void problem2(){
    cout<<"Random Integration to find PI again"<<endl<<endl;
    //Display exact values of PI
    cout<<"Pi = "<<fixed<<setprecision(15)<<atan(1)*4<<endl<<endl;
    //Declare variables
    int nDarts,inCircle=0,maxRandom=pow(2,31);
    float approxPI=0;
    //Ask question as to number of darts
    cout<<"During the dart game, How many darts do you want to throw"<<endl;
    cin>>nDarts;
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Start playing the game
    for(int throwDart=1;throwDart<=nDarts;throwDart++){
        float x=1.0f*rand()/maxRandom;
        float y=1.0f*rand()/maxRandom;
        if((x*x+y*y)<=1)inCircle++;
    }
    //Calculate the approx value of PI
    approxPI=4.0f*inCircle/nDarts;
    //Output the result
    cout<<"The Approximate value of PI = "<<approxPI<<endl<<endl;
}

//Solution to problem 3
void problem3(){
    //Declare Variables
    char pin[6];
    unsigned short inBal,   //Initial Balance 
            debits,         //All debits for the month
            credits;        //All credits for the month
    float totBal;           //Total balance
    
    //Input info and validate pin
    
    cout<<"Please enter your 4 digit PIN:"<<endl;
    cin>>pin;
    
    while (!(str.size(pin)==4)){
        cout<<"Please input a 4 digit PIN:"<<endl;
        cin>>pin;
    }
    
    cout<<"What is your initial balance?"<<endl;
    cin>>inBal;
    
    cout<<"What is the total about of debits charged for the month?"<<endl;
    cin>>debits;
    
    cout<<"What is the total amount of credit added for the month?"<<endl;
    cin>>credits;
    
    //Check new balance for overdraw, calculate total balance
    if(debits>(credits+inBal)){     //If balance is negative
        totBal=credits+inBal-debits-27.75f;
        
        cout<<"Your account has been overdrawn. A fee of "<<endl;
              "$27.75 has been applied. In order to charge"<<endl;
              "more debits to your account, please zero out"<<endl;
              "the balance and add more credit. Thank you."<<endl<<endl;
    }else{                          //If balance is positive
        totBal=credits+inBal-debits;
    }
    
    //Output new balance
    cout<<"Your balance is $"<<totBal<<endl<<endl;
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
}

//Solution to problem 5
void problem5(){
    //Declare variables
    int hours; //hours worked
    float payRate, totPay; //Rate of pay and total payment
    
    //Inputs
    cout<<"How many hours did you work?"<<endl;
    cin>>hours;
    
    cout<<"What is your pay rate?"<<endl;
    cin>>payRate;
    
    //Determine total payment
    if (hours <=40){
        totPay=hours*payRate;
    }else if (hours>40&&hours<=50){
        totPay=40*payRate+(hours-40)*(2*payRate);
    }else if (hours>50){
        totPay=40*payRate+10*(2*payRate)+(hours-50)*(3*payRate);
    }
    //Output total pay
    cout<<"You earned $"<<totPay<<" this week."<<endl<<endl;
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}