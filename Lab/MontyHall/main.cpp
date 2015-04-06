/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on April 1, 2015, 8:47 AM
 * Purpose: Play the Monty Hall Game
 *          Analyze saying with your first door choice or
 *          changing to the other door
 */

//User Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//System Libraries

//Global Constants

//Function Prototype

//Execution Starts Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned int nGames,win=0,loss=0;
    unsigned int door,doorOpn,prize,othDoor;
    char stay;
    //Prompt user for inputs
    cout<<"This is the Monty Hall Game, Let's make a deal"<<endl;
    cout<<"How many games would you like to play (1-4x10^9)?"<<endl;
    cin>>nGames;
    cout<<"Are you going to stay if given the opportunity, type S for stay"<<endl;
    cout<<"or type C to change"<<endl;
    cout<<"Type anything else to choose the other door"<<endl;
    cin>>stay;
    //Loop for all the games
    for (int game=1;game<=nGames;game++)
        //Randomly choose your door
        door=rand()%3+1;
        //Randomly choose the prize door
        prize=rand()%3+1;
        //Randomly choose the door to open 
        do{
             doorOpn=rand()%3+1;
        }while(door==doorOpn||prize==doorOpn);//Can't be the same
        //What is the other door, meaning the door not chosen
        do{
             othDoor=rand()%3+1;
        }while(othDoor==doorOpn||othDoor==door);//Can't be the same
        //cout<<" D="<<door<<" othD= "<<othDoor<<" OpnD="<<doorOpn<<" Prize"<<prize<<endl;
        //Swap the doors if given the opportunity
        if(stay!='S'&&stay!='s'){//Used DeMorgan's laws to test validity
            //When found, now swap
            door=othDoor;
        }
        //Now statistically count how many wins and losses.
        if(door==prize)win++;
        else loss++;
    //Output the results
    cout<<"out of "<<nGames<<" played"<<endl;
    if(stay=='S'||stay=='s')cout<<"I am not changing my door and "<<endl;
    else cout<<"I am changing my door "<<endl;
    cout<<"I win -> "<<win<<" times -> "<<100.0f*win/nGames<<"%"<<endl;
    cout<<"vs loosing "<<loss<<" times!"<<100.0f*win/nGames<<"%"<<endl;
    //Exit stage right
    return 0;
}

