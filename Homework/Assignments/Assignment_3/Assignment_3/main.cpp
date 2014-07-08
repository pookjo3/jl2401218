/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Purpose:  Assignment 3
 * Problem 8 -> Blackjack Hand
 * Problem 5 -> Telephone Bill
 * Created on July 7 2014, 5:44 PM
 */

#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 8 to solve problem 8"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 16 to solve problem 16"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 21 to solve problem 21 (Gaddis)"<<endl;
        cout<<"Type 17 to solve problem 17 (Gaddis)"<<endl;
        cout<<"Type 0 to solve problem 17 (Savitch)"<<endl;
        cout<<"Type 15 to solve problem 15"<<endl;
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 9 to solve problem 9"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        int choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 8:{
                    //Declare Variables
                    unsigned short handNum, score;
                    char input;
                   
                   //Ask for hand size 
                    bool loop = true;
                        
                    do{
                        cout<<"Please input hand size(2-5)"<<endl;
                        cin>>handNum;
                    if(handNum >= 2 && handNum <= 5){
                            loop = false;
                    }else{
                        cout<<"Invalid hand size."<<endl;
                    }
                    }while(loop);
                    
                    //Ask for hand values
                    for (int i = 0; i<handNum; i++){
                        cout<<"Please input card "<<i+1<<": ";
                        cin>>input;
                        
                        switch(input){              //Add value to total
                            
                            case 'J':
                            case 'j':    
                            case 'Q':
                            case 'q':
                            case 'T':
                            case 't':
                            case 'k':
                            case 'K':
                                score+=10;
                                break;
                            case 'a':
                            case 'A':
                                if (score+11>21){
                                    score+=1;
                                }else{
                                    score+=11;
                                }
                                break;
                            default:
                                score+=input-48;
                                break;
                        }
                    }
                    //Output hand total
                    cout<<"You "<<(score<22?"won":"busted")<<" with a score of "<<score<<endl;
                    break;
                }
            case 5:
    
                //Declare Variables
                char day,dum;
                unsigned short minutes,hour;
                float bill;
    
                //Inputs
                cout<<"Telephone Bill for a Call"<<endl;
                cout<<"Input the day of the Week"<<endl;
                cout<<"Mo Tu We Th Fr Sa Su"<<endl;
                cin>>day>>dum;
                cout<<"Input the time of the call"<<endl;
                cout<<"Military Time 1:30PM = 13:30 military"<<endl;
                cin>>setw(2)>>hour>>dum>>dum>>dum;
                cout<<"Input the duration of call in minutes"<<endl;
                cin>>minutes;
    
                //Calculate the Bill
                if(day=='S'){
                    bill=1.5e-1f*minutes;
                }else{
                if(hour>=8&&hour<18){
                    bill=4e-1f*minutes;
                }else{
                    bill=2.5e-1f*minutes;
                    }
                }
    
                //Output the results
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Your Phone Bill = $"<<bill<<endl;
                break;
                
            case 16:{
                //Declare Variables
                int degC=100;
                int degF=(9*degC/5+32);
    
    
                for(degC; degC!=degF; degF=9*degC/5+32){
                    degC--;
                }
                //Output the result
                cout<<"Celsius = Fahrenheit at "<<degC<<endl;
                break;
            }
            case 6:
                float a,     //Input a
                b,          //Input b
                c,          //Input c
                g,          //discriminant
                x1,         //Root 2
                x2;         //Root 1
    
                cout<<"Input value for a: ";
                cin>>a;
                cout<<"Value for b: ";
                cin>>b;
                cout<<"Value for c: ";
                cin>>c;
    
                //Calculations
                g=pow(b,2)-4*a*c;
                if(g>0){
                    x1=(-b+(sqrtf(g)))/(2*a);
                    x2=(-b-(sqrtf(g)))/(2*a);
                    cout<<"The roots are: "<<x1<<" and "<<x2<<"."<<endl;
                }else if (g<0){
                    x1=x2=-b/(2*a);
                    float imag=sqrtf(-g)/(2*a);
                    cout<<"Root 1 = "<<x1<<" +"<<imag<<"i"<<endl;
                    cout<<"Root 2 = "<<x2<<" -"<<imag<<"i"<<endl;
                }else{
                    x1=-b/(2*a);
                    cout<<"The Root is "<<x1<<endl;
                }
                break;
            case 21:{
                //Define Variables
                float area, radius, base, height;
                const float PI = 3.14159;
                int shape;
                
                cout<<"1. Calculate the Area of a Circle"<<endl;
                cout<<"2. Calculate the Area of a Rectangle"<<endl;
                cout<<"3. Calculate the Area of a Triangle"<<endl;
                cout<<"4. Quit"<<endl;
                cin>>shape;
                
                switch (shape){
                    case 1:
                        cout<<"Please input the radius of the circle: ";
                        cin>>radius;
                        
                        //Calculate
                        area=PI*radius*radius;
                        
                        //Output
                        cout<<"The area is "<<area;
                        break;
                    case 2:
                        cout<<"Please input the base of the rectangle: ";
                        cin>>base;
                        
                        cout<<"Please input the height of the rectangle: ";
                        cin>>height;
                        
                        //Calculate
                        area=base * height;
                        
                        //Output
                        cout<<"The area is "<<area;
                        break;
                    case 3:
                        cout<<"Please input the base of the triangle: ";
                        cin>>base;
                        
                        cout<<"Please input the height of the triangle: ";
                        cin>>height;
                        
                        //Calculate
                        area=(base * height)/2;
                        
                        //Output
                        cout<<"The area is "<<area;
                        break;
                }
                }
            case 17:{
                float   wvLngth, //Wavelength
                        freq;    //Frequency
                const float SPEED_LIGHT = 2.99e8; //Speed of light in meters per second
                //Input
                cout<<"Input the wavelength of the wave in meters.\n";
                cin>>wvLngth;
        
                //Calculations
                freq = SPEED_LIGHT / wvLngth;
        
                //Check for wave type
                if (wvLngth>=5e0){
                    cout<<"The wave is a radio wave, and its frequency is "<<freq<<" Hz.\n";
                }
                if (wvLngth < 5e0&&wvLngth >= 5e-3){
                    cout<<"The wave is a micro wave, and its frequency is "<<freq<<" Hz.\n";
                }
                if (wvLngth < 5e-3 && wvLngth >= 5e-6){
                    cout<<"The wave is an infared wave, and its frequency is "<<freq<<" Hz.\n";
                }
                if (wvLngth < 5e-6&& wvLngth >= 1e-7){
                    cout<<"The wave is a visible wave, and its frequency is "<<freq<<" Hz.\n";
                }
                if (wvLngth < 1e-7&& wvLngth >= 1e-9){
                    cout<<"The wave is an ultraviolet wave, and its frequency is "<<freq<<" Hz.\n";
                }
                if (wvLngth < 1e-9&& wvLngth >= 1e-11){
                    cout<<"The wave is an x-ray wave, and its frequency is "<<freq<<" Hz.\n";
                }
            }
                break;
            case 0:{
                unsigned short weight, age, height, calCBar;
                char sex, act;
                float bmr, cndybar;
    
                cout<<"Please enter the calories of your chosen calories: ";
                cin>>calCBar;
    
                cout<<"Please enter your weight in pounds: ";
                cin>>weight;
    
                cout<<"Please enter your height in inches: ";
                cin>>height;
    
                cout<<"Please enter your age in years: ";
                cin>>age;
    
                cout<<"Are you a male or a female? [M/F] ";
                cin>>sex;
    
                cout<<"Would you consider yourself Sedentary [1], Somewhat Active [2], Active [3], Highly Active [4]? ";
                cin>>act;
    
    
                if(sex=='f'||sex=='F'){
                    if (act=='1'){
                        bmr=(655+4.3*weight+4.7*height-4.7*age)*1.2f;
                    }else if (act=='2'){
                        bmr=(655+4.3*weight+4.7*height-4.7*age)*1.3f;
                    }else if (act=='3'){
                        bmr=(655+4.3*weight+4.7*height-4.7*age)*1.4f;
                    }else if (act=='4'){
                        bmr=(655+4.3*weight+4.7*height-4.7*age)*1.5f;
                    }else {
                        bmr=655+4.3*weight+4.7*height-4.7*age;
                    }
                }else if(sex=='m'||sex=='M'){
                    if (act=='1'){
                        bmr=(66+6.3*weight+12.9*height-4.7*age)*1.2f;
                    }else if (act=='2'){
                        bmr=(66+6.3*weight+12.9*height-4.7*age)*1.3f;
                    }else if (act=='3'){
                        bmr=(66+6.3*weight+12.9*height-4.7*age)*1.4f;
                    }else if (act=='4'){
                        bmr=(66+6.3*weight+12.9*height-4.7*age)*1.5f;
                    }else {
                        bmr=66+6.3*weight+12.9*height-4.7*age;
                    }
                }else{
                    cout<<"Please enter either M or F.";
                }
                cndybar=bmr/calCBar;
            
                cout<<"Your BMR is "<<bmr<<endl;
                cout<<"You can eat "<<cndybar<<" candy bars."<<endl;
            }
            break;
            case 15:{
                //Declare Varables
                float boyF, vol, weight, radius;
                const float SPECIFIC_W=62.4f;
                const float PI=3.14159f;

                //Inputs
                cout<<"Boyancy Tester\n";
                cout<<"Input the weight in pounds: ";
                cin>>weight;
                cout<<"Input the radius in feet: ";
                cin>>radius;
    
                //Calculations
                vol=(4/3)*PI*pow(radius, 3);
                boyF=vol*SPECIFIC_W;

                //Output Loops
                if (boyF>weight){
                    cout<<"The sphere will float.\n";
                }
                else
                    cout<<"The sphere will sink.\n";
            }
            case 1:
                //Define Variables
                char p1in, p2in, repeat; //Player inputs and repeat variables

                    //Inputs
                    cout<<"Player 1: Choose either Rock [R], Paper [P], or Scissors [S]\n";
                    cin>>p1in;

                    cout<<"Player 2: Choose either Rock [R], Paper [P], or Scissors [S]\n";
                    cin>>p2in;

                    if ((p1in=='r'||p1in=='R')&&(p2in=='p'||p2in=='P'))
                        cout<<"Player 2 wins, Paper covers Rock"<<endl<<endl;
                    else if ((p1in=='r'||p1in=='R')&&(p2in=='s'||p2in=='S'))
                        cout<<"Player 1 wins, Rock smashes Scissors"<<endl<<endl;
                    else if ((p1in=='r'||p1in=='R')&&(p2in=='r'||p2in=='R'))
                        cout<<"Tie Game"<<endl<<endl;
                    else if ((p1in=='s'||p1in=='S')&&(p2in=='p'||p2in=='P'))
                        cout<<"Player 1 wins, Scissors cuts Paper"<<endl<<endl;
                    else if ((p1in=='s'||p1in=='S')&&(p2in=='R'||p2in=='r'))
                        cout<<"Player 2 wins, Rock smashes Scissors"<<endl<<endl;
                    else if ((p1in=='s'||p1in=='S')&&(p2in=='s'||p2in=='S'))
                        cout<<"Tie Game"<<endl<<endl;
                    else if ((p1in=='p'||p1in=='P')&&(p2in=='p'||p2in=='P'))
                        cout<<"Tie Game"<<endl<<endl;
                    else if ((p1in=='p'||p1in=='P')&&(p2in=='s'||p2in=='S'))
                        cout<<"Player 2 wins, Scissors cuts Paper"<<endl<<endl;
                    else if ((p1in=='p'||p1in=='P')&&(p2in=='R'||p2in=='r'))
                        cout<<"Player 1 wins, Paper covers Rock"<<endl<<endl;
                    else
                        cout<<"Invalid Choice\n"<<endl;

                    cout<<"Play again? [Y/N]\n";
                    cin>>repeat;
                
            case 9:{
                //Define Variables
                float loanAmt, intRate, mnthPay, balance, totInt, mnthInt, simpInt;
                int month=0;
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                    //Inputs
                    cout<<"What is the amount of your loan?\n";
                    cin>>loanAmt;

                    cout<<"What is the interest rate in %?\n";
                    cin>>intRate;

                    //Calculations
                    intRate= (intRate/12)/100;
                    mnthPay=loanAmt/20;
                    balance=loanAmt;
                    mnthInt=intRate*balance;
                    do{
                        balance = (balance + mnthInt)-mnthPay;
                        totInt+=mnthInt;
                        month++;

                        //Output

                        cout<<"Balance Remaining After "<<month<<" Months $"<<balance<<endl;
                    }while (balance>mnthPay);

                    simpInt = (loanAmt/(totInt/((month+1)/12)));

                    cout<<"Months Taken to Pay Loan :"<<month+1<<endl;
                    cout<<"Monthly Payment:      $"<<mnthPay<<endl;
                    cout<<"Total Interest Payed: $"<<totInt<<endl;
                    cout<<"Simple Annualized Interest: "<<simpInt<<"%"<<endl;
                break;
            }
            
            default:
                loop=false;
        };
    }while(loop);//Upper do-while
    return 0;
}
