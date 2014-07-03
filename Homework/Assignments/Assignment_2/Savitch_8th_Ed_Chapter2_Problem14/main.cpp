/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on July 2, 2014, 9:31 PM
 * Savitch_8th_Ed_Chap2_Problem14
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    string insName, youName, food, number, adj, color, animal;
    
    //Prompt for input
    cout<<"Please input your instructor's last name: ";
    cin>>insName;
    cout<<"Please input your first name: ";
    cin>>youName;
    cout<<"Please input a food: ";
    cin>>food;
    cout<<"Please input a number between 100 and 120: ";
    cin>>number;
    cout<<"Please input an adjective: ";
    cin>>adj;
    cout<<"Please input a color: ";
    cin>>color;
    cout<<"Please input an animal: ";
    cin>>animal;
    cout<<endl<<endl;
    //Output Paragraph
    cout<<"Dear Instructor "<<insName<<","<<endl<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<number<<". Next, my "<<adj<<" pet"<<endl;
    cout<<animal<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late"<<endl<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<youName<<endl;
    //Exit
    return 0;
}