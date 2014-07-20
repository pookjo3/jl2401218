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
    //Declare Variables
    char dig4[5];
    
    cout<<"Please enter a 4 digit number."<<endl;
    cin>>dig4;
    
    //Determine characters inside array
    for (int i=0; i<4; i++){
        switch (dig4[i]){
            case '0':
                cout<<"0: "<<endl;
                break;
            case '1':
                cout<<"1: *"<<endl;
                break;
            case '2':
                cout<<"2: **"<<endl;
                break;
            case '3':
                cout<<"3: ***"<<endl;
                break;
            case '4':
                cout<<"4: ****"<<endl;
                break;
            case '5':
                cout<<"5: *****"<<endl;
                break;
            case '6':
                cout<<"6: ******"<<endl;
                break;
            case '7':
                cout<<"7: *******"<<endl;
                break;
            case '8':
                cout<<"8: ********"<<endl;
                break;
            case '9':
                cout<<"9: *********"<<endl;
                break;
            default:
                cout<<dig4[i]<<": ?"<<endl;
        }
    }
    cout<<endl<<endl;
}

//Solution to problem 3
void problem3(){
    //Declare Variables
    cout<<fixed<<setprecision(2);
    
    std::string pin;
    unsigned short inBal,   //Initial Balance 
            debits,         //All debits for the month
            credits;        //All credits for the month
    float totBal;           //Total balance
    
    //Input info and validate pin
    
    cout<<"Please enter your 4 digit PIN:"<<endl;
    cin >> pin;
    
    while (!(pin.size()==4)){
        cout<<"Please enter a valid 4 digit PIN:"<<endl;
        cin >> pin;
    }
    unsigned short pinNum = atoi(pin.c_str()); //convert to unsigned short for later use
   
    cout<<"What is your initial balance?"<<endl;
    cin>>inBal;
    
    cout<<"What is the total about of debits charged for the month?"<<endl;
    cin>>debits;
    
    cout<<"What is the total amount of credit added for the month?"<<endl;
    cin>>credits;
    
    //Check new balance for overdraw, calculate total balance
    if(debits>(credits+inBal)){     //If balance is negative
        totBal=credits+inBal-debits-27.75f;
        
        cout<<endl<<"Your account has been overdrawn. A fee of "<<endl;
        cout<<"$27.75 has been applied. In order to charge"<<endl;
        cout<<"more debits to your account, please zero out"<<endl;
        cout<<"the balance and add more credit. Thank you."<<endl<<endl;
    }else{                          //If balance is positive
        totBal=credits+inBal-debits;
    }
    
    //Output new balance
    cout<<"Your balance is $"<<totBal<<endl<<endl;
}

//Solution to problem 4
void problem4(){
    //Declare Variables
    unsigned int hours;
    float bill;
    char pack;
    
    cout<<fixed<<setprecision(2);
    //Ask for inputs
    
    cout<<"How many hours did you use the internet?"<<endl;
    cin>>hours;
    
    cout<<"Package A: $19.95 per month for 5 hours access, plus $0.75 per hour "<<endl;
    cout<<"after that for 20 hours. All additional hours are $1 per hour."<<endl;
    cout<<"Package B: $24.95 per month, 15 hours access.  Additional hours"<<endl;
    cout<<"are $0.75 up to 25 hours then $0.50 for each hour above this limit."<<endl;
    cout<<"Package C: $29.75 per month unlimited access."<<endl<<endl;
    cout<<"Please choose your package."<<endl;
    cin>>pack;
    
    //Calculate bill
    switch (pack){
        case 'a':
        case 'A':
            if (hours<=5){
                bill=19.95f;
            }else if (hours>5&&hours<=20){
                bill=19.95f+(hours-5)*.75f;
            }else if (hours>20){
                bill=19.95f+15*.75f+(hours-20);
            }
            cout<<"Your monthly bill is $"<<bill<<endl;
            if (hours >=12){
                cout<<"Consider upgrading to a better package to save money."<<endl;
            }
            break;
            
        case 'b':
        case 'B':
            if (hours<=15){
                bill=24.95f;
            }else if (hours>15&&hours<=25){
                bill=24.95f+(hours-15)*.75f;
            }else if (hours>25){
                bill=24.95f+10*.75f+(hours-25)*.5f;
            }
            cout<<"Your monthly bill is $"<<bill<<endl;
            if (hours >=22){
                cout<<"Consider upgrading to a better package to save money."<<endl;
            }
            break;
        case 'c':
        case 'C':
            bill=29.75f;
            cout<<"Your monthly bill is $"<<bill<<endl;
            break;
        default:
            cout<<"Not a valid package.";
    }
    cout<<endl;
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
    cout<<setprecision(7);
    
    //Declare Variables
    unsigned int terms, x;
    float est, t=1, sum=1, actual, error;
    
    //Enter inputs
    cout<<"What power to raise e to?"<<endl;
    cin>>x;
    cout<<"How many terms do you want?"<<endl;
    cin>>terms;
    
    //Loop to approximate e^x
    for (int i=1; i<=terms; i++){
        est=i;   
        t=t*x/est;   
        sum=sum+t;   
    }
    //Calculate actual e
     actual=exp(x);
     
    //Calculate error
    error=(actual-sum)/actual;
    
    //Output
    cout<<"Estimation: "<<sum<<endl;
    cout<<"Actual answer: "<<actual<<endl;
    cout<<"Error in %: "<<error*100<<endl<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}