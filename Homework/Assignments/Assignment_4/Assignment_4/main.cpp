/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee 
 * Created on July 10th, 2014, 11:30 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float LIT_GAL = .264179f;
const float UNIV_GRAV = 6.673e-8f;
//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables and set global precision
    int choice;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 1 for Problem 1 from Savitch"<<endl;
        cout<<"Type 2 for Problem 2 from Savitch"<<endl;
        cout<<"Type 3 for Problem 4 from Savitch"<<endl;
        cout<<"Type 4 for Problem 5 from Savitch"<<endl;
        cin>>choice;
        
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
            case  1:{   //Miles Per Gallon Calculator
                //Declare Variables
                float miles, litG, mpg, galG;
                char rep;
                
                //Begin the loop
                do{
                    //Get the inputs for miles and liters of gas
                    cout<<"How many miles did you drive? ";
                    cin>>miles;
                    
                    cout<<"How many liters did you use? ";
                    cin>>litG;
                    
                    //Calculate number of gallons then miles per gallon
                    galG=litG*LIT_GAL;
                    mpg=miles/galG;
                    
                    //Output miles per gallon
                    cout<<"Your car got "<<mpg<<" miles per gallon."<<endl;
                    
                    //Ask if it wants to repeat
                    cout<<"Repeat? [Y/N] ";
                    cin>>rep;
                }while (rep=='y'||rep=='Y'); //Test for repeat
                
                break;
            }case 2:{
                                //Declare Variables
                float miles1, miles2, litG1, litG2, mpg1, mpg2, galG1, galG2;
                char rep;
                
                //Begin the loop
                do{
                    //Get the inputs for miles and liters of gas of each car
                    cout<<"How many miles did car 1 drive? ";
                    cin>>miles1;
                    
                    cout<<"How many liters did car 1 use? ";
                    cin>>litG1;
                    
                    cout<<"How many miles did car 2 drive? ";
                    cin>>miles2;
                    
                    cout<<"How many liters did car 2 use? ";
                    cin>>litG2;
                    
                    //Calculate number of gallons then miles per gallon for car 1
                    galG1=litG1*LIT_GAL;
                    mpg1=miles1/galG1;
                    
                    //Calculate number of gallons then miles per gallon for car 2
                    galG2=litG2*LIT_GAL;
                    mpg2=miles2/galG2;
                    
                    //Output miles per gallon
                    cout<<"Car 1 got "<<mpg1<<" miles per gallon."<<endl;
                    cout<<"Car 2 got "<<mpg2<<" miles per gallon."<<endl;
                    //Determine the more efficient car
                    if (mpg2>mpg1){
                        cout<<"Car 2 was more efficient."<<endl;
                    }else{
                        cout<<"Car 1 was more efficient."<<endl;
                    }
                    
                    //Ask if it wants to repeat
                    cout<<"Repeat? [Y/N] ";
                    cin>>rep;
                }while (rep=='y'||rep=='Y'); //Test for repeat
                cout<<endl<<endl;
                break;
            }case 3:{
                //Declare variables
                float price1, price2, infRate;
                char rep;
                                
                do{
                    //Ask for price of the items 1 year ago and today
                    cout<<"What was the price of the item 1 year ago? $";
                    cin>>price1;

                    cout<<"What was the price of the item today? $";
                    cin>>price2;

                    //Calculate the inflation
                    infRate= (price2-price1)/price1;

                    //Output the inflation rate
                    cout<<"The inflation rate is "<<infRate*100<<"% per year"<<endl;
                    
                    cout<<"Repeat? [Y/N]";
                    cin>>rep;
                } while (rep=='y'||rep=='Y');
                cout<<endl;
                break;         
            }case 4:{
                 //Declare variables
                float price1, price2, price3, infRate;
                char rep;
                
                do{
                    //Ask for price of the items 1 year ago and today
                    cout<<"What was the price of the item 1 year ago? $";
                    cin>>price1;

                    cout<<"What was the price of the item today? $";
                    cin>>price2;

                    //Calculate the inflation and the future prices
                    infRate= (price2-price1)/price1;
                    price3=(price2*infRate)+price2;

                    //Output the inflation rate and the price in 1 and 2 years
                    cout<<"The inflation rate is "<<infRate*100<<"% per year"<<endl;
                    cout<<"The estimated price next year is $"<<(price2*infRate)+price2<<endl;
                    cout<<"The estimated price in 2 years is $"<<price3*infRate+price3<<endl;
                    cout<<"Repeat? [Y/N]";
                    cin>>rep;
                } while (rep=='y'||rep=='Y');
                cout<<endl;
                break;
            }case 5:{
                //Declare Variables
                float mass1, mass2, distance; //Masses are in grams and distance in centimeters
                
                //Ask for inputs for mass and distance
                cout<<"Please input the two masses in grams separated by a space.\n";
                cin>>mass1>>mass2;
                cout<<"Please enter a positive non zero distance in centimeters\n";
            }default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }while(choice>=1&&choice<=10);

    //Exit stage right!
    return 0;
}