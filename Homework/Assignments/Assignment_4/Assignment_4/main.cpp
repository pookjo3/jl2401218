/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee 
 * Created on July 10th, 2014, 11:30 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

//User Libraries

//Global Constants
const float LIT_GAL = .264179f;
const float UNIV_GRAV = 6.673e-8f;
const float CNVPDOL=1/100.0f;

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
        cout<<"Type 5 for Problem 7 from Savitch"<<endl;
        cout<<"Type 6 for Problem 9 from Savitch"<<endl;
        cout<<"Type 7 for Problem 10 from Savitch"<<endl;
        cout<<"Type 8 for Problem 15 from Savitch"<<endl;
        cout<<"Type 9 for Problem 1 from Savitch"<<endl;
        cout<<"Type 10 for Problem 3 from Gaddis"<<endl;
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
            }case 2:{ //Miles per gallon calculator for 2 cars
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
            }case 3:{ //Inflation Calculator
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
            }case 4:{ //Future inflation calculator
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
            }case 5:{ //Universal Gravitation
                //Declare Variables
                float mass1, mass2, distance, force; //Masses are in grams and distance in centimeters
                
                //Ask for inputs for mass and distance
                cout<<"Please input the two masses in grams separated by a space.\n";
                cin>>mass1>>mass2;
                cout<<"Please enter a positive non zero distance in centimeters\n";
                cin>>distance;
                
                //Calculate the force
                force=(UNIV_GRAV*mass1*mass2)/distance;
                
                //Output the force
                cout<<"The gravitational force between these two objects is equal to "<<force<<" dynes."<<endl;
                break;
            }case 6:{ //Clothing Size Calc
                //Declare Variables
                float hatSize, jktSize, waist;
                unsigned short weight, height, age;
                
                //Ask for inputs
                cout<<"What is your weight in pounds? ";
                cin>>weight;
                
                cout<<"What is your height in inches? ";
                cin>>height;
                
                cout<<"What is your age? ";
                cin>>age;
                
                //Calculate clothing sizes
                hatSize= (weight/height)*2.9f;
                
                if (age>=40){
                    int temp = ((age/10)-3); //Modifier for everyone over 40
                    
                    jktSize= static_cast<float>(height)*weight/288+(temp/8.0f);
                } else{
                    jktSize= static_cast<float>(height)*weight/288;
                }
                if (age>=30){
                    int temp2 = ((age/2)-14);
                    waist = weight/5.7f+temp2/10.0f;
                } else{
                    waist = weight/5.7f;
                }
                
                //Output clothing sizes
                cout<<"Your hat size is "<<hatSize<<endl;
                cout<<"Your jacket size is "<<jktSize<<endl;
                cout<<"Your waist size is "<<waist<<endl;
                break;
            }case 7:{ //Future clothing size
                //Declare Variables
                float hatSize, jktSize, waist, jktSize2, waist2;
                unsigned short weight, height, age;
                
                //Ask for inputs
                cout<<"What is your weight in pounds? ";
                cin>>weight;
                
                cout<<"What is your height in inches? ";
                cin>>height;
                
                cout<<"What is your age? ";
                cin>>age;
                
                //Calculate clothing sizes
                hatSize= (weight/height)*2.9f;
                
                if (age>=40){
                    int temp = ((age/10)-3); //Modifier for everyone over 40
                    
                    jktSize= static_cast<float>(height)*weight/288+(temp/8.0f);
                } else{
                    jktSize= static_cast<float>(height)*weight/288;
                }
                if (age>=30){
                    int temp2 = ((age/2)-14);
                    waist = weight/5.7f+temp2/10.0f;
                } else{
                    waist = weight/5.7f;
                }
                
                //Calculate future sizes
                               
                if (age+10>=40){
                    int temp = ((age/10)-3); //Modifier for everyone over 40
                    
                    jktSize2= static_cast<float>(height)*weight/288+(temp/8.0f);
                } else{
                    jktSize2= static_cast<float>(height)*weight/288;
                }
                if (age+10>=30){
                    int temp2 = ((age/2)-14);
                    waist2 = weight/5.7f+temp2/10.0f;
                } else{
                    waist2 = weight/5.7f;
                }
                //Output clothing sizes
                cout<<"Your hat size is "<<hatSize<<endl;
                cout<<"Your jacket size is "<<jktSize<<endl;
                cout<<"Your waist size is "<<waist<<endl;
                cout<<"Your hat size in 10 years will be "<<hatSize<<endl;
                cout<<"Your jacket size in 10 years will be "<<jktSize2<<endl;
                cout<<"Your waist size in 10 years will be "<<waist2<<endl;
                break;
            }case 8:{ //Twinkie vending machine
                //Declare variables
                unsigned short cstTwke=350;//350 pennies or $3.50
                unsigned short total=0;//Amount tendered in pennies
                unsigned short change;//Calculate change at the end
                unsigned short nQuarters,nNickels,nDimes;//Number of coins to return
                char vD=10,vN=5,vQ=25,vB=100;//Value of each coin
                const int SIZE=8;
                char dime[SIZE]="dime";
                char nickel[SIZE]="nickel";
                char quarter[SIZE]="quarter";
                char dollar[SIZE]="dollar";
                char coin[SIZE];

                //Prompt user for purchase of Twinkie
                cout<<"Twinkie's cost $3.50"<<endl;
                cout<<"Input nickle, dime, quarter, and dollar"<<endl;
                cout<<"until the purchase price is reached"<<endl;

                //Loop and Input coins one by one
                do{
                    //Prompt user for the coin or bill
                    cout<<endl<<endl<<"Input Coin or Bill"<<endl;
                    cin>>coin;
                    if(!strcmp(coin,dime))total+=vD;
                    else if(strcmp(coin,nickel)==0)total+=vN;
                    else if(!strcmp(coin,quarter))total+=vQ;
                    else if(!strcmp(coin,dollar))total+=vB;
                    else{
                        cout<<"Not a real coin doofus."<<endl;
                    }
                    //Display the current total
                    cout<<fixed<<showpoint<<setprecision(2);
                    float display=total*CNVPDOL;//Display in dollars
                    cout<<"Total amount tendered so far = $"<<display<<endl;

                }while(total<cstTwke);

                //Calculate the change and return
                cout<<"Be happy ruining your health! :)"<<endl;
                float display=(total-cstTwke)*CNVPDOL;//Display in dollars
                cout<<"Your change is $"<<display<<endl;
            }case 9:{ //Sum calculator
                //Declare Variables
                int startV, sumV=0;
                
                //Ask for inputs
                cout<<"Type a positive integer: "<<endl;
                cin>>startV;
                
                //Use for loop to get sum
                for (int i=1; i <=startV; i++){
                    sumV+=i;
                }
                
                //Output
                cout<<"The sum is "<<sumV<<endl;
                break;
            }case 10:{ //Sea level calculator
                //Declare Variables
                    //None
                
                cout<<"The sea level is rising by 1.5 millimeters per year.\n"
                        "This table will show how high it will rise in the next\n"
                        "25 years if it continues."<<endl;
                cout<<"Year:        mm risen:"<<endl;
                for (int i=0; i<=25; i++){
                    cout<<"Year "<<i<<" Millimeters risen: "<<i*1.5<<endl;
                }
                cout<<endl;
                break;
            }default:{
                cout<<"Exit Menu"<<endl;
            }
        };
    }while(choice>=1&&choice<=10);

    //Exit stage right!
    return 0;
}