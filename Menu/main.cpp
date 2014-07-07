/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10 with a for-loop
 * Problem 2 -> Sum the numbers between 1 and 10 with a while-loop
 * Problem 3 -> Sum the numbers between 1 and 10 with a do-while loop
 * Created on October 13, 2011, 6:44 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 3 again"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '1':{
                    int sum=0;
                    for(int num=1;num<=10;num++){
                        sum+=num;
                    }
                    cout<<endl;
                    cout<<"Solution to 1 for-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '2':{
                    int sum=0,num=1;
                    while(num<=10){
                        sum+=num++;
                    }
                    cout<<endl;
                    cout<<"Solution to 2 While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '3':{
                    int sum=0,num=1;
                    do{
                        sum+=num++;
                    }while(num<=10);
                    cout<<endl;
                    cout<<"Solution to 3 Do-While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '4':{
                    int sum=0,num=1;
                    do{
                        sum+=num++;
                    }while(num<=10);
                    cout<<endl;
                    cout<<"Solution to 3 Do-While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                default:{
                        cout<<"Exit?"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}

