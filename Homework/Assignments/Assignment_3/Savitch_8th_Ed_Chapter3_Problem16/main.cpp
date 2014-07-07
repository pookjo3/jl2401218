/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 7, 2014, 10:28 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int tempF, tempC=100;
    
    //Test
    while (tempC!=tempF){
        tempC--;
        tempF=9*tempC/5+32;
    }

    //Output
    cout<<"Celcius = Ferhenhiet at "<<tempF<<" degrees."<<endl;
    
    return 0;
}

