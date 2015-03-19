/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on March 9, 2015, 9:43 AM\
 *      Purpose: To see how many Snickers it takes to survive.
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Constants

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short wtLbs,htIn,ageYrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Promt the user for input
    cout<<"How many candy0 bars will it take"<<endl;
    cout<<"to maintain your weight?"<<endl;
    cout<<"Input your weight in lbs"<<endl;
    cin>>wtLbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htIn;
    cout<<"Input your age in years"<<endl;
    cin>>ageYrs;
    cout<<"are you male or female m/f on character input"<<endl;
    cin>>mf;
    
    //Calculates
    BMRFem=655+4.3*wtLbs+4.7*htIn-4.7*ageYrs;
    BMRMale=66+6.3*wtLbs+12.9*htIn-6.8*ageYrs;
    //       Ques       if  male       if female
    nCBars=(mf=='m')?(BMRMale/cBar):(BMRFem/cBar);
    
    //Output the results
    cout<<"your weight = "<<wtLbs<<"(lbs)"<<endl;
    cout<<"your height = "<<htIn<<"(inches)"<<endl;
    cout<<"your age = "<<ageYrs<<"(years)"<<endl;
    cout<<"your weight = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" Candy bars/day"<<endl;
    
    //Exit Stage Right!
    return 0;
}

