/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 2, 2014 at 9:46 PM
 * Savitch 8th_Ed_Chapter2_Problem15
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float velo, startT, endT;
    
    //Prompt for user input
    cout<<"What is starting temperature in Celsius?"<<endl;
    cin>>startT;
    cout<<"What is ending temperature in Celsius?"<<endl;
    cin>>endT;
    
    //Loop and display results
    for(int i = startT; i <= endT; i++){
        velo = 331.3 + (0.61*i);
        cout<<"At "<<i<<" degrees Celsius the velocity of sound is "<<velo<<" m/s"<<endl;
    }
    
    //Exit
    return 0;
}