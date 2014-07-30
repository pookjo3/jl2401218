/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Project 1
 * Created on July 30, 2014, 12:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

//Function Prototypes
void writefile();

int main(int argc, char** argv) {
//Declare Variables
    const int STATS=10;
    const int CHARACTERS=2;
    short playSts[STATS][CHARACTERS];   //Array Holding Player and Enemy Stats
    
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
    
    int critCh;                                                                         //Critical hit chance
    unsigned short choiceP, choiceE;                                                    //Attack choices for player and enemy
    char role, brave;                                                                   //Player Role and decision choice
    
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    fstream filex;
    filex.open("text.txt")
    
    
    //Write to File
    writefile();
    
    //Set up Setting
    cout<<"Your village has been plagued by the fierce 'Winged Demon' for ages."<<endl;
    cout<<"Not much is known about this beast since it rarely appears for more"<<endl;
    cout<<"than a few moments while it snatches up its prey, but what is known"<<endl;
    cout<<"is that this 'Demon' must be dispatched. Many attempts have"<<endl;
    cout<<"been made in the past, but things are getting desperate. Trials were"<<endl;
    cout<<"held, and you were chosen. It is up to you to defend your friends and"<<endl;
    cout<<"family from this danger."<<endl<<endl<<endl;
    
    cout<<"Please choose your role: "<<endl;
    cout<<"A: Rogue:    A slighty weaker class with a higher chance of Critical Hits"<<endl;             //Describe the Rogue class
    cout<<"             which bypass enemy defenses. Magic power "<<endl;
    cout<<"             is average, as well as defenses."<<endl<<endl;
    cout<<"B: Mage:     A very weak attacker with strong magical abilities. Magic"<<endl;                //Describe the Mage class
    cout<<"             points are increased. Defenses are slightly less than average."<<endl<<endl;
    cout<<"C: Warrior:  A strong physical class that lacks in magic power, but has"<<endl;               //Describe the Warrior class
    cout<<"             higher attack and defensive stats. Cannot land critical hits."<<endl<<endl;
    cout<<"Type A for the Rogue class, B for the Mage class, and C for the Warrior class."<<endl;
    cin>>role;
    cout<<endl;
    
    //Determine role chosen and input stats
    switch (toupper(role)){
        case 'A':
            cout<<"Rogue class"<<endl;                                                                  //Input values for the different statistics for the Rogue class
            cout<<"HP=85"<<endl;
            cout<<"MP=100"<<endl;
            cout<<"Attack=30"<<endl;
            cout<<"Defense=20"<<endl;
            cout<<"Magic Attack=25"<<endl;
            cout<<"Magic Defense=25"<<endl;
            cout<<"Critical Chance: 30%"<<endl;
            cout<<"Potions=2"<<endl;
            cout<<"With your daggers and knifes on your hip, you set off into"<<endl;
            cout<<"the mountain, and into the lair of the Winged Demon."<<endl<<endl;
            break;
        case 'B':
            cout<<"Mage class"<<endl;                                                                   //Input values for the different statistics for the Mage class
            cout<<"HP=75"<<endl;
            cout<<"MP=150"<<endl;
            cout<<"Attack=15"<<endl;
            cout<<"Defense=25"<<endl;
            cout<<"Magic Attack=50"<<endl;
            cout<<"Magic Defense=35"<<endl;
            cout<<"Critical Chance: 10%"<<endl;
            cout<<"Potions=2"<<endl;
            cout<<"With your short sword in one hand and staff in the other, you"<<endl;
            cout<<"set off into the mountain, and into the lair of the Winged Demon."<<endl<<endl;
            break;
        case 'C':
            cout<<"Warrior class"<<endl;                                                                //Input values for the different statistics for the Warrior class
            cout<<"HP=100"<<endl;
            cout<<"MP=70"<<endl;
            cout<<"Attack=25"<<endl;
            cout<<"Defense=35"<<endl;
            cout<<"Magic Attack=10"<<endl;
            cout<<"Magic Defense=10"<<endl;
            cout<<"Critical Chance: 0%"<<endl;
            cout<<"Potions=1"<<endl;
            cout<<"With your long sword in your hands and a good set of armor on your back,"<<endl;
            cout<<"you set off into the mountain, and into the lair of the Winged Demon."<<endl<<endl;
            break;
    }
    
    cout<<"After traversing the mountain pass to the lair of the Winged Demon, you find a large cavern."<<endl;             //Ask if player want to turn back
    cout<<"You can not quite see into the cavern very much, but you hear loud and deep breaths coming from"<<endl;
    cout<<"far inside the cave within. This must be the cave where the beast resides. Do you enter inside? [Y/N]"<<endl;
    cin>>brave;
    
    if (brave=='y'||brave=='Y'){
        cout<<"You decide to enter inside. Once in, you see the most horrid sight. Skeletons lay about, charred"<<endl;
        cout<<"by intense heat. The stench of rotting meat overwhelms your nostrils. Suddenly... you see it. In the"<<endl;
        cout<<"darkness something stirs, and whatever it is, it is quite large. Suddenly, you hear a loud, ferocious"<<endl;
        cout<<"roar, the Winged Demon awakes. The Demon stands three or four men tall, and must be as big as a house."<<endl;
        cout<<"Heat emanates from its mouth, and claws protrude from its hands. Wings that seemed to have the power to"<<endl;
        cout<<"topple even the strongest buildings extend from its back. This is surely the Winged Demon."<<endl<<endl;
        
        while (playHP>0&&enemHP>0){                                                                                         //Loop fight sequence as long as player HP and enemy HP are larger than 0
            cout<<"Your HP: "<<playHP<<"/"<<playHPm<<"         Winged Demon HP: "<<enemHP<<"/150"<<endl;                        //Display Player and Enemy Health
            cout<<"Your MP: "<<playMP<<"/"<<playMPm<<"         Winged Demon MP: "<<enemMP<<"/100"<<endl;                        //Display Player and Enemy Magic Points
            cout<<"Potions: "<<potions<<endl<<endl;                                                                             //Display Number of potions
            cout<<"What will you do? (Enter the Number for the chosen action)"<<endl;                                           //Display the menu of options for the player actions
            cout<<"1. Attack      3. Potion"<<endl;
            cout<<"2. Magic"<<endl;
            cin>>choiceP;                                                                                                       
            cout<<endl;
            
            critCh=rand()%9;                                                                                                    //Calculate critical value for this turn
            //cout<<"Crit"<<critCh<<endl;
            switch (choiceP){                                                                                                   //Read in player choice
                case 1:                                                                                                                 //Player Attacks
                    if (playCrt<=critCh){                                                                                                   //Check for critical hit
                        cout<<"CRITICAL STRIKE! You attack the Winged Demon for "<<playAtk<<" damage."<<endl;
                        enemHP-=playAtk;
                    }else{
                        cout<<"You attack the Winged Demon for "<<playAtk-enemDef<<" damage."<<endl;                                        //Deal damage to enemy
                        enemHP-=(playAtk-enemDef);
                    }
                    break;
                    
                case 2:                                                                                                                 //Player uses Magic
                    if (playMP-25>25){                                                                                                      //Check to see if they have enough MP
                        if (playCrt<=critCh){                                                                                                   //Check for critical hit
                            cout<<"CRITICAL STRIKE! Your spell hits the Winged Demon for "<<playMgk<<" damage."<<endl;
                            enemHP-=playMgk;
                            playMP-=25;
                        }else if (playMgk>enemMDf){                                                                                             //Check if players magic is higher than enemy magic defense
                            cout<<"Your spell hits the Winged Demon for "<<playMgk-enemMDf<<" damage."<<endl;
                            enemHP-=(playMgk-enemMDf);                                                                                              //If true:Deal damage to enemy
                            playMP-=25;                                                                                                                 //Subtract MP
                        }else{
                            cout<<"Your magic attacks are too weak to even effect the Winged Demon. 0 Damage."<<endl;                               //If false: deal no damage
                        }  
                    }else{
                        cout<<"You try to cast your spell, but are magically drained. 0 Damage."<<endl;
                    }
                                                                                                                                 //Subtract MP
                    break;
                case 3:                                                                                                                 //Player uses a potion
                    if (potions >0){                                                                                                        //Check if potions are available
                        cout<<"You use a potion to recover 40 Health Points."<<endl;                                                            //Player recovers 40HP
                        playHP+=40;
                        potions--;                                                                                                              //Remove one potion
                    }else{
                        cout<<"You reach into your pouch to find a potion, but none are found, you wasted time and cannot attack"<<endl;    //Wasted turn if not available
                    }
                    break;
            }
            if (enemHP<=0){                                                                                                     //Check if enemy is dead, stop fight if true
                break;
            }
            choiceE=rand()%5;                                                                                                   //Random number to determine enemy attack
            if (choiceE==4){                                                                                                        //20% chance of using magic
                if (enemMP-25>0){                                                                                                       //Check if enemy has MP
                    cout<<"The Winged Demon shoots a fireball at you! It does "<<enemMgk-playMdf<<" damage."<<endl;                         //Deal damage if true, subtract MP from enemy
                    playHP-=(enemMgk-playMdf);
                    enemMP-=25;                                                                                                             
                }else{
                    cout<<"The dragon attempts to spit out a fireball, but seems to be unable to."<<endl;                                   //No damage dealt if false
                }
            }else{                                                                                                                  //Enemy attacks
                cout<<"The Winged Demon slashes at you with its claws! It does "<<enemAtk-playDef<<" damage."<<endl;                    //Deal damage
                playHP-=(enemAtk-playDef);
            }
            if (playMP+15>playMPm){                                                                                             //Check if MP recovery needed for both characters
                playMP=playMPm;
            }else{
                playMP+=15;                                                                                                         //Recover up to 15 MP per turn for both characters
            }
            if (enemMP+15>100){
                enemMP=100;
            }else{
                enemMP+=15;
            }
        }
        if (playHP<=0){                                                                                                                     //If player HP drops down to less than zero
            cout<<"The Winged Beast scores a fatal blow and you fall before him. He devours your remains before laying siege to your"<<endl;    //Display Game over message
            cout<<"village and utterly destroying it. You have failed. Game Over."<<endl;
        }else{                                                                                                                              //If enemy HP drops down to less than zero
            cout<<"The Winged Beast staggers backwards and cries out in pain. You ready yourself for more combat, but as you do, the Demon"<<endl;  //Display Game victory message
            cout<<"falls and lets one last attempt at a roar out as it dies. You have succeeded. Your people are safe! Congratulations!!!"<<endl;
        }
    }else{
        cout<<"You chicken out and run away like a little girl. You have shamed your family and your village."<<endl;
        cout<<"After a few weeks the Winged Demon kills all of your friends and family, along with burning your town"<<endl;
        cout<<"to ashes. Game over."<<endl;
    }
    return 0;
}

void writefile(){
    filex <<"Your village has been plagued by the fierce 'Winged Demon' for ages."<<endl;
    <<"Not much is known about this beast since it rarely appears for more"<<endl;
    cout<<"than a few moments while it snatches up its prey, but what is known"<<endl;
    cout<<"is that this 'Demon' must be dispatched. Many attempts have"<<endl;
    cout<<"been made in the past, but things are getting desperate. Trials were"<<endl;
    cout<<"held, and you were chosen. It is up to you to defend your friends and"<<endl;
    cout<<"family from this danger."<<endl<<endl<<endl;
    
    cout<<"Please choose your role: "<<endl;
    cout<<"A: Rogue:    A slighty weaker class with a higher chance of Critical Hits"<<endl;             //Describe the Rogue class
    cout<<"             which bypass enemy defenses. Magic power "<<endl;
    cout<<"             is average, as well as defenses."<<endl<<endl;
    cout<<"B: Mage:     A very weak attacker with strong magical abilities. Magic"<<endl;                //Describe the Mage class
    cout<<"             points are increased. Defenses are slightly less than average."<<endl<<endl;
    cout<<"C: Warrior:  A strong physical class that lacks in magic power, but has"<<endl;               //Describe the Warrior class
    cout<<"             higher attack and defensive stats. Cannot land critical hits."<<endl<<endl;
    cout<<"Type A for the Rogue class, B for the Mage class, and C for the Warrior class."<<endl;
}