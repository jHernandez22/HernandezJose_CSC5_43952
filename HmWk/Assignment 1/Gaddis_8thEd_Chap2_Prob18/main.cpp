/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 4, 2015, 8:23 AM
 *      Purpose: 2nd HW Prob
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Libraries
unsigned char CNVPCT=100;

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nCust, nEDrnks, nCDrnks;
    unsigned short pEDrnks, pCDrnks;
    
    //Assigned Values
    nCust=16500;//Number of Customers
    pEDrnks=15;//Percentage Energy Drinkers
    pCDrnks=58;//Percentage out of Energy Drinkers That
   
    //Process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks+0.5;//Round Up
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks+.5;//ROund Up
   
    //Output Everything
    cout<<"Customer Survey Problem:"<<endl;
    cout<<"Number of customer = "<<nCust<<endl;
    cout<<"Percentage Energy Drinkers = "
            <<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/Energy Drinkers = "
            <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculate Value:"<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //
    return 0;
}

