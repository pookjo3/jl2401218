/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Project 1
 * Created on July 30, 2014, 12:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

//Function Prototypes
void writefile();
void readfile();
void chooseclass(int &);
int fightseq(short[], short[], int);

int main(int argc, char** argv) {
//Declare Variables
    const int STATS=10;
    short charSts[STATS];   //Array Holding Player Stats
    short enemSts[STATS]=      {150,            //Enemy HP
                                150,            //Enemy Max HP
                                100,            //Enemy MP
                                100,            //Enemy Max MP
                                45,             //Enemy Attack
                                10,             //Enemy Defense
                                40,             //Enemy Magic Attack
                                20,             //Enemy Magic Defense
                                0,              //Leftover stats (not applicable to enemy)
                                0};
    
    short rogue[STATS]=        {85,             //Rogue HP 
                                85,             //Rogue Max HP
                                100,            //Rogue MP
                                100,            //Rogue Max MP
                                30,             //Rogue Attack
                                20,             //Rogue Defense
                                25,             //Rogue Magic Attack
                                25,             //Rogue Magic Defense
                                7,              //Rogue Critical Chance
                                2};             //Rogue Potion Count
    
    short mage[STATS]=         {75,             //Mage HP
                                75,             //Mage Max HP
                                150,            //Mage MP
                                150,            //Mage Max MP
                                15,             //Mage Attack
                                25,             //Mage Defense
                                50,             //Mage Magic Attack
                                35,             //Mage Magic Defense
                                9,              //Mage Critical Chance
                                4};             //Mage Potion Count
    
    short warrior[STATS]=      {100,            //Warrior HP
                                100,            //Warrior Max HP
                                70,             //Warrior MP
                                70,             //Warrior Max MP
                                25,             //Warrior Attack
                                35,             //Warrior Defense
                                10,             //Warrior Magic Attack
                                10,             //Warrior Magic Defense
                                10,             //Warrior Critical Chance
                                1};             //Warrior Potion Count
    string end[2]={"THE", "END"};
    
    int critCh, role;                           //Critical hit chance and role selection
    int win;                                    //Winner (1=Player Wins, 0=Dragon WIns)

    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    writefile();
    
    readfile();
    
    chooseclass(role);
    
    switch(role){
        case 1:
            for(int i=0;i<STATS;i++){
                charSts[i]=rogue[i];
            }
            break;
        case 2:
            for(int i=0;i<STATS;i++){
                charSts[i]=mage[i];
            }
            break;
        case 3:
            for(int i=0;i<STATS;i++){
                charSts[i]=warrior[i];
            }
            break;
    }
    
    win=fightseq(charSts,enemSts, STATS);
    
    //cout<<"win is "<<win<<endl;
    switch(win){
        case 1:
            cout<<"The Winged Beast staggers backwards and cries out in pain. You ready yourself for more combat, but as you do, the Demon"<<endl;  //Display Game victory message
            cout<<"falls and lets one last attempt at a roar out as it dies. You have succeeded. Your people are safe! Congratulations!!!"<<endl;
            break;
        case 0:
            cout<<"The Winged Beast scores a fatal blow and you fall before him. He devours your remains before laying siege to your"<<endl;    //Display Game over message
            cout<<"village and utterly destroying it. You have failed. Game Over."<<endl;
            break;
    }
    cout<<endl;
    for (int x=0; x<2; x++){
        for (int y=0; y<3; y++){
            cout<<end[x][y]<<" ";
        }
    }
    
    return 0;
}

void writefile(){
    fstream myfile;
    myfile.open ("storybits.txt");
    
    myfile<<"Your village has been plagued by the fierce 'Winged Demon' for ages."<<endl;
    myfile<<"Not much is known about this beast since it rarely appears for more"<<endl;
    myfile<<"than a few moments while it snatches up its prey, but what is known"<<endl;
    myfile<<"is that this 'Demon' must be dispatched. Many attempts have"<<endl;
    myfile<<"been made in the past, but things are getting desperate. Trials were"<<endl;
    myfile<<"held, and you were chosen. It is up to you to defend your friends and"<<endl;
    myfile<<"family from this danger."<<endl<<endl<<endl;
    myfile.close();
}

void readfile(){
    string line;
    fstream myfile;
    myfile.open ("storybits.txt");
    
    while (getline(myfile,line)){
        cout<<line<<'\n';
    }
    myfile.close();
}

void chooseclass(int &role){
    //Declare Local Variables
    char check;
       
    do{
        cout<<"Please choose your role: "<<endl;
        cout<<"1: Rogue:    A slighty weaker class with a higher chance of Critical Hits"<<endl;             //Describe the Rogue class
        cout<<"             which bypass enemy defenses. Magic power "<<endl;
        cout<<"             is average, as well as defenses."<<endl<<endl;
        cout<<"2: Mage:     A very weak attacker with strong magical abilities. Magic"<<endl;                //Describe the Mage class
        cout<<"             points are increased. Defenses are slightly less than average."<<endl<<endl;
        cout<<"3: Warrior:  A strong physical class that lacks in magic power, but has"<<endl;               //Describe the Warrior class
        cout<<"             higher attack and defensive stats. Cannot land critical hits."<<endl<<endl;
        cout<<"Type 1 for the Rogue class, 2 for the Mage class, and 3 for the Warrior class."<<endl;

        cin>>role;
        cout<<endl;

        //Determine role chosen
        switch (toupper(role)){
            case 1:
                cout<<"Rogue class"<<endl;                                                                  //Display Rogue Stats
                cout<<"HP=85"<<endl;
                cout<<"MP=100"<<endl;
                cout<<"Attack=30"<<endl;
                cout<<"Defense=20"<<endl;
                cout<<"Magic Attack=25"<<endl;
                cout<<"Magic Defense=25"<<endl;
                cout<<"Critical Chance: 30%"<<endl;
                cout<<"Potions=2"<<endl;
                cout<<"Are you sure you want the Rogue class? [Y/N]"<<endl;
                cin>>check;
                break;
            case 2:
                cout<<"Mage class"<<endl;                                                                   //Display Mage Stats
                cout<<"HP=75"<<endl;
                cout<<"MP=150"<<endl;
                cout<<"Attack=15"<<endl;
                cout<<"Defense=25"<<endl;
                cout<<"Magic Attack=50"<<endl;
                cout<<"Magic Defense=35"<<endl;
                cout<<"Critical Chance: 10%"<<endl;
                cout<<"Potions=2"<<endl;
                cout<<"Are you sure you want the Mage class? [Y/N]"<<endl;
                cin>>check;
                break;
            case 3:
                cout<<"Warrior class"<<endl;                                                                //Display Warrior Stats
                cout<<"HP=100"<<endl;
                cout<<"MP=70"<<endl;
                cout<<"Attack=25"<<endl;
                cout<<"Defense=35"<<endl;
                cout<<"Magic Attack=10"<<endl;
                cout<<"Magic Defense=10"<<endl;
                cout<<"Critical Chance: 0%"<<endl;
                cout<<"Potions=1"<<endl;
                cout<<"Are you sure you want the Warrior class? [Y/N]"<<endl;
                cin>>check;
                break;
        }
    }while (check=='N'||check=='n');
}

int fightseq(short charSts[],short enemSts[], int STATS){
    int temp;
    int choiceP;
    int critCh;
    int choiceE;
    
    cout<<"You decide to enter inside. Once in, you see the most horrid sight. Skeletons lay about, charred"<<endl;
    cout<<"by intense heat. The stench of rotting meat overwhelms your nostrils. Suddenly... you see it. In the"<<endl;
    cout<<"darkness something stirs, and whatever it is, it is quite large. Suddenly, you hear a loud, ferocious"<<endl;
    cout<<"roar, the Winged Demon awakes. The Demon stands three or four men tall, and must be as big as a house."<<endl;
    cout<<"Heat emanates from its mouth, and claws protrude from its hands. Wings that seemed to have the power to"<<endl;
    cout<<"topple even the strongest buildings extend from its back. This is surely the Winged Demon."<<endl<<endl;

    while (charSts[0]>0&&enemSts[0]>0){                                                                                         //Loop fight sequence as long as player HP and enemy HP are larger than 0
        cout<<"Your HP: "<<charSts[0]<<"/"<<charSts[1]<<"         Winged Demon HP: "<<enemSts[0]<<"/"<<enemSts[1]<<endl;                        //Display Player and Enemy Health
        cout<<"Your MP: "<<charSts[2]<<"/"<<charSts[3]<<"         Winged Demon MP: "<<enemSts[2]<<"/"<<enemSts[3]<<endl;                        //Display Player and Enemy Magic Points
        cout<<"Potions: "<<charSts[9]<<endl<<endl;                                                                             //Display Number of potions
        cout<<"What will you do? (Enter the Number for the chosen action)"<<endl;                                           //Display the menu of options for the player actions
        cout<<"1. Attack      3. Potion"<<endl;
        cout<<"2. Magic"<<endl;
        cin>>choiceP;                                                                                                       
        cout<<endl;

        critCh=rand()%9;                                                                                                    //Calculate critical value for this turn
        //cout<<"Crit"<<critCh<<endl;
        switch (choiceP){                                                                                                   //Read in player choice
            case 1:                                                                                                                 //Player Attacks
                if (charSts[8]<=critCh){                                                                                                   //Check for critical hit
                    cout<<"CRITICAL STRIKE! You attack the Winged Demon for "<<charSts[4]<<" damage."<<endl;
                    enemSts[0]-=charSts[4];
                }else{
                    cout<<"You attack the Winged Demon for "<<charSts[4]-enemSts[5]<<" damage."<<endl;                                        //Deal damage to enemy
                    enemSts[0]-=(charSts[4]-enemSts[5]);
                }
                break;

            case 2:                                                                                                                 //Player uses Magic
                if (charSts[2]-25>25){                                                                                                      //Check to see if they have enough MP
                    if (charSts[8]<=critCh){                                                                                                   //Check for critical hit
                        cout<<"CRITICAL STRIKE! Your spell hits the Winged Demon for "<<charSts[6]<<" damage."<<endl;
                        enemSts[0]-=charSts[6];
                        charSts[2]-=25;
                    }else if (charSts[6]>enemSts[7]){                                                                                             //Check if players magic is higher than enemy magic defense
                        cout<<"Your spell hits the Winged Demon for "<<charSts[6]-enemSts[7]<<" damage."<<endl;
                        enemSts[0]-=(charSts[6]-enemSts[7]);                                                                                              //If true:Deal damage to enemy
                        charSts[2]-=25;                                                                                                                 //Subtract MP
                    }else{
                        cout<<"Your magic attacks are too weak to even effect the Winged Demon. 0 Damage."<<endl;                               //If false: deal no damage
                    }  
                }else{
                    cout<<"You try to cast your spell, but are magically drained. 0 Damage."<<endl;
                }
                                                                                                                             //Subtract MP
                break;
            case 3:                                                                                                                 //Player uses a potion
                if (charSts[9] >0){                                                                                                        //Check if potions are available
                    cout<<"You use a potion to recover 40 Health Points."<<endl;                                                            //Player recovers 40HP
                    charSts[0]+=40;
                    charSts[9]--;                                                                                                              //Remove one potion
                }else{
                    cout<<"You reach into your pouch to find a potion, but none are found, you wasted time and cannot attack"<<endl;    //Wasted turn if not available
                }
                break;
        }
        if (enemSts[0]<=0){                                                                                                     //Check if enemy is dead, stop fight if true
            break;
        }
        choiceE=rand()%5;                                                                                                   //Random number to determine enemy attack
        if (choiceE==4){                                                                                                        //20% chance of using magic
            if (enemSts[2]-25>0){                                                                                                       //Check if enemy has MP
                cout<<"The Winged Demon shoots a fireball at you! It does "<<enemSts[6]-charSts[7]<<" damage."<<endl;                         //Deal damage if true, subtract MP from enemy
                charSts[0]-=(enemSts[6]-charSts[7]);
                enemSts[2]-=25;                                                                                                             
            }else{
                cout<<"The dragon attempts to spit out a fireball, but seems to be unable to."<<endl;                                   //No damage dealt if false
            }
        }else{                                                                                                                  //Enemy attacks
            cout<<"The Winged Demon slashes at you with its claws! It does "<<enemSts[4]-charSts[5]<<" damage."<<endl;                    //Deal damage
            charSts[0]-=(enemSts[4]-charSts[5]);
        }
        if (charSts[2]+15>charSts[3]){                                                                                             //Check if MP recovery needed for both characters
            charSts[2]=charSts[3];
        }else{
            charSts[2]+=15;                                                                                                         //Recover up to 15 MP per turn for both characters
        }
        if (enemSts[2]+15>100){
            enemSts[2]=100;
        }else{
            enemSts[2]+=15;
        }
    }
    if (charSts[0]<=0){
        temp = 0;
    }else if (enemSts[0]<=0){
        temp = 1;
    }else{
        cout<<"Error"<<endl;
    }
    //cout<<"Temp is "<<temp<<endl;
    return temp;
}