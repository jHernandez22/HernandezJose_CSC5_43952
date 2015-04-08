/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on April 8, 2015, 7:51 AM
 *      Purpose: To gain weight, become a public health
 *              hazard, and to design the interface to a 
 *              fried twinkie machine.
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=80;
    char input[SIZE];
    unsigned short totChng=0,pTwnke=350;
    char nQtrs,nDimes,nNikels;
    //Prompt user for input
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This is a Fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkie cost $3.50"<<endl;
    cout<<"INput your change as"<<endl;
    cout<<"Dollar, Quarter, Dime, Nickels"<<endl;
    do{
        cout<<endl<<"Input coins/change"<<endl;
        cin>>input;
        if(strcmp(input,"Dollar")==0){
            totChng+=100;
        }else if(strcmp(input,"Quarter")==0){
            totChng+=25;
        }else if(strcmp(input,"Dime")==0){
            totChng+=10;
        }else if(strcmp(input,"Nickel")==0){
            totChng+=5;
        }else {
            cout<<"No Slugs Allowed"<<endl;
        }
        cout<<"Total Change = $ "<<totChng/100.0f<<endl;
    }while(totChng<pTwnke);
    //Give Twinkie
    cout<<endl<<"Here is your Fried Twinkie"<<endl;
    //Calculate the change
    totChng-=pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //How many Quarters
    nQtrs=totChng/25;
    if(nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters Change"<<endl;
    //How many Dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if(nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    //How many Nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if(nNikels>0)cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;
    //Exit Stage Right.
    return 0;
}