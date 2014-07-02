/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 1, 2014, 10:30 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float TON_OUNCE = 35273.92f; //Metric ton in ounces

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float cerWght, //Weight of the Cereal
          wghtTon, //Weight of Cereal in tons
          numbBox; //Number of boxes in one ton
    char repeat;
  
    do{   
        //Input
        cout<<"Please input the weight of the cereal in ounces:"<<endl;
        cin>>cerWght;
    
        //Calculations
        wghtTon = cerWght / TON_OUNCE;
        numbBox = TON_OUNCE / cerWght;
    
        //Output
        cout<<"The weight of the cereal in metric tons is "<<wghtTon<<endl;
        cout<<"There are "<<numbBox<<" boxes of cereal in one metric ton."<<endl;
        cout<<"Repeat? [Y/N]"<<endl;
        cin>>repeat;
      
    }while (repeat=='y'||repeat=='Y');
    
    return 0;
}

