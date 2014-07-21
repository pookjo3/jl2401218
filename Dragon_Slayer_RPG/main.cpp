/* 
 * File:   main.cpp
 * Author: JJ
 *
 * Created on July 19, 2014, 11:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;


int main(int argc, char** argv) {
//Declare Variables
    short playHP, enemHP=150, playHPm;                                                  //Player and Enemy Health, and max health for the player
    unsigned short playAtk, playDef, playMgk, playMdf, playCrt, playMP, playMPm,         //Player Attack, Defense, Magic, Magic Defense, Critical Chance, Magic Points, and max magic points
                   enemAtk=45, enemDef=10, enemMgk=40, enemMDf=20, enemMP=100;          //Enemy Attack, Defense, Magic, Magic Defense, and Magic Points
    int critCh, potions=2;                                                              //Critical hit chance
    unsigned short choiceP, choiceE;                                                    //Attack choices for player and enemy
    char role, brave;                                                                   //Player Role and decision choice
    
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Set up Setting
    cout<<"Your village has been plagued by the fierce 'Winged Demon' for ages."<<endl;
    cout<<"Not much is known about this beast since it rarely appears for more"<<endl;
    cout<<"than a few moments while it snatches up its prey, but what is known"<<endl;
    cout<<"is that this 'Demon' is that he must be dispatched. Many attempts have"<<endl;
    cout<<"been made in the past, but things are getting desperate. Trials were"<<endl;
    cout<<"held, and you were chosen. It is up to you to defend your friends and"<<endl;
    cout<<"family from this danger."<<endl<<endl<<endl;
    
    //Choose the role
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
            cout<<"Rogue class"<<endl;
            playHP=playHPm=85;
            playMP=playMPm=100;
            playAtk=30;
            playDef=30;
            playMgk=25;
            playMdf=25;
            playCrt=7;
            cout<<"With your daggers and knifes on your hip, you set off into"<<endl;
            cout<<"the mountain, and into the lair of the Winged Demon."<<endl<<endl;
            break;
        case 'B':
            cout<<"Mage class"<<endl;
            playHP=playHPm=75;
            playMP=playMPm=150;
            playAtk=15;
            playDef=20;
            playMgk=40;
            playMdf=35;
            playCrt=9;
            cout<<"With your short sword in one hand and staff in the other, you"<<endl;
            cout<<"set off into the mountain, and into the lair of the Winged Demon."<<endl<<endl;
            break;
        case 'C':
            cout<<"Warrior class"<<endl;
            playHP=playHPm=100;
            playMP=playMPm=70;
            playAtk=40;
            playDef=35;
            playMgk=10;
            playMdf=20;
            playCrt=10;
            cout<<"With your long sword in your hands and a good set of armor on your back,"<<endl;
            cout<<"you set off into the mountain, and into the lair of the Winged Demon."<<endl<<endl;
            break;
    }
    
    cout<<"After traversing the mountain pass to the lair of the Winged Demon, you find a large cavern."<<endl;
    cout<<"You can not quite see into the cavern very much, but you hear loud and deep breaths coming from"<<endl;
    cout<<"deep within. This must be the cave where the beast resides. Do you enter inside? [Y/N]"<<endl;
    cin>>brave;
    
    if (brave=='y'||brave=='Y'){
        cout<<"You decide to enter inside. Once in, you see the most horrid sights. Skeletons lay about, charred"<<endl;
        cout<<"by intense heat. The stench of rotting meat overwhelms your nostrils. Suddenly... you see it. In the"<<endl;
        cout<<"darkness something stirs, and whatever it is, it is quite large. Suddenly, you hear a loud, ferocious"<<endl;
        cout<<"roar, the Winged Demon awakens. The Demon stands three or four men tall, and must be as big as a house."<<endl;
        cout<<"Heat emanates from its mouth, and claws protrude from its hands. Wings that seemed to have the power to"<<endl;
        cout<<"topple even the strongest buildings extend from its back. This is surely the Winged Demon."<<endl<<endl;
        
        while (playHP>0&&enemHP>0){
            cout<<"Your HP: "<<playHP<<"/"<<playHPm<<"         Winged Demon HP: "<<enemHP<<"/150"<<endl;
            cout<<"Your MP: "<<playMP<<"/"<<playMPm<<"         Winged Demon MP: "<<enemMP<<"/100"<<endl;
            cout<<"Potions: "<<potions<<endl<<endl;
            cout<<"What will you do? (Enter the Number for the chosen action)"<<endl;
            cout<<"1. Attack      3. Potion"<<endl;
            cout<<"2. Magic"<<endl;
            cin>>choiceP;
            cout<<endl;
            
            critCh=rand()%9;    //Calculate critical value for this turn
            cout<<"Crit"<<critCh<<endl;
            switch (choiceP){
                case 1:
                    if (playCrt<=critCh){
                        cout<<"CRITICAL STRIKE! You attack the Winged Demon for "<<playAtk<<" damage."<<endl;
                        enemHP-=playAtk;
                    }else{
                        cout<<"You attack the Winged Demon for "<<playAtk-enemDef<<" damage."<<endl;
                        enemHP-=(playAtk-enemDef);
                    }
                    break;
                    
                case 2:
                    if (playMP-25>25){
                        if (playCrt<=critCh){
                            cout<<"CRITICAL STRIKE! Your spell hits the Winged Demon for "<<playMgk<<" damage."<<endl;
                            enemHP-=playMgk;
                        }else if (playMgk>enemMDf){
                            cout<<"Your spell hits the Winged Demon for "<<playMgk-enemMDf<<" damage."<<endl;
                            enemHP-=(playMgk-enemMDf);
                        }else{
                            cout<<"Your magic attacks are too weak to even effect the Winged Demon. 0 Damage."<<endl;
                        }  
                    }else{
                        cout<<"You try to cast your spell, but are magically drained. 0 Damage."<<endl;
                    }
                    playMP-=25;
                    break;
                case 3:
                    if (potions >0){
                        cout<<"You use a potion to recover 40 Health Points."<<endl;
                        playHP+=40;
                        potions--;
                    }else{
                        cout<<"You reach into your pouch to find a potion, but none are found, you wasted time and cannot attack"<<endl;
                    }
                    break;
            }
            if (enemHP<=0){
                break;
            }
            choiceE=rand()%5;
            if (choiceE==4){
                if (enemMP-25>0){
                    cout<<"The Winged Demon shoots a fireball at you! It does "<<enemMgk-playMdf<<" damage."<<endl;
                    playHP-=(enemMgk-playMdf);
                    enemMP-=25;
                }else{
                    cout<<"The dragon attempts to spit out a fireball, but seems to be unable to."<<endl;
                }
            }else{
                cout<<"The Winged Demon slashes at you with its claws! It does "<<enemAtk-playDef<<" damage."<<endl;
                playHP-=(enemAtk-playDef);
            }
            if (playMP+15>playMPm){
                playMP=playMPm;
            }else{
                playMP+=15;
            }
            if (enemMP+15>100){
                enemMP=100;
            }else{
                enemMP+=15;
            }
        }
        if (playHP<=0){
            cout<<"The Winged Beast scores a fatal blow and you fall before him. He devours your remains before laying siege to your"<<endl;
            cout<<"village and utterly destroying it. You have failed. Game Over."<<endl;
        }else{
            cout<<"The Winged Beast staggers backwards and cries out in pain. You ready yourself for more combat, but as you do, the Demon"<<endl;
            cout<<"falls and lets one last attempt at a roar out as it dies. You have succeeded. Your people are safe! Congratulations!!!"<<endl;
        }
    }else{
        cout<<"You chicken out and run away like a little girl. You have shamed your family and your village."<<endl;
        cout<<"After a few weeks the Winged Demon kills all of your friends and family, along with burning your town"<<endl;
        cout<<"to ashes. Game over."<<endl;
    }
    return 0;
}

