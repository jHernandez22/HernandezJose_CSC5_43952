/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on April 22, 2015, 7:52 AM
 *      Purpose:
 */

#include <iostream>
#include <iomanip>

//System Libraries
using namespace std;

//User LIbraries

//Global Functions

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numLins,x,space;
    cout<<"How many line do you wish to output."<<endl;
    cin>>numLins;
    x=numLins;
   
    //For Loop
    cout<<"Your wish is my command."<<endl;
    for(int numLins=x;numLins>=1;numLins--)
    cout<<setw(numLins)<<numLins<<endl;
            
    
    //Exit Stage Right!
    return 0;
}