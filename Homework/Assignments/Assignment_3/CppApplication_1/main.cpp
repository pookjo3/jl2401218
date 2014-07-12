/* 
 * File:   main.cpp
 * Author: JJ
 *
 * Created on July 11, 2014, 11:04 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
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
                    cout<<"temp = "<<temp<<endl;
                    
                    jktSize= static_cast<float>(height)*weight/288+(temp/8);
                } else{
                    jktSize= static_cast<float>(height)*weight/288;
                }if (age>=30){
                    int temp2 = ((age/2)-14);
                    cout<<"temp2= "<<temp2;
                    waist = weight/5.7f+temp2/10;
                } else{
                    waist = weight/5.7f;
                }
                
                //Calculate future sizes
                
                if (age+10>=40){
                    int temp = (((age+10)/10)-3); //Modifier for everyone over 40
                    cout<<"temp = "<<temp;
                    jktSize2= static_cast<float>(height)*weight/288+(temp/8.0f);
                } else{
                    jktSize2= static_cast<float>(height)*weight/288;
                }if (age+10>=30){
                    int temp2 = (((age+10)/2)-14);
                    cout<<"temp2= "<<temp2<<endl;
                    waist2 = weight/5.7f+(temp2/10.0f);
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
                
    return 0;
}

