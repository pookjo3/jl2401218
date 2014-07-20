/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 14, 2014, 10:32 AM
 * Purpose: Project 1 Farkle
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution begins here!
int main(int argc, char** argv) {
    unsigned int score, die1, die2, die3, die4, die5, die6;                        //Score for player 1 and 2
    unsigned int roundSc;                               //Score within the round
    char stop[]="STOP";                                       //Stop turn input
    unsigned int val1=100, val5=50, val111=val1*10, 
            val222=200, val333=300, val444=400, 
            val555=val5*10,val666=600, val4K=1000, 
            val5K=2000, val6K=3000, val1t6=1500, 
            val3P=1500;                                 //Values for the different rolls
    const unsigned int ENDSCRE=7500;
   
    //Set our random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    die6=rand()%6+1;
    
    cout<<"Die 1: "<<die1<<endl;
    cout<<"Die 2: "<<die2<<endl;
    cout<<"Die 3: "<<die3<<endl;
    cout<<"Die 4: "<<die4<<endl;
    cout<<"Die 5: "<<die5<<endl;
    cout<<"Die 6: "<<die6<<endl;
    return 0;
}

