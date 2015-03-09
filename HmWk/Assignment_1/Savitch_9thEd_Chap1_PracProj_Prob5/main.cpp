/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 4, 2015, 10:07 AM
 *      Purpose:
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Libraries

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Define Variables
    int fncWth,fncHght,totLnth;
    
    //Input Numbers
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the Width of Fence (in feet):"<<endl;
    cin>>fncWth;
    cout<<"Enter the Height of Fence (in feet):"<<endl;
    cin>>fncHght;
    
    //Calculate
    totLnth=fncWth*2+fncHght*2;
    
    //Output Results
    cout<<"If you have a Width of "<<fncHght<<" feet"<<endl;
    cout<<"and a Height of "<<fncWth<<" feet, then"<<endl;
    cout<<"the total total length of the rectangle is "<<totLnth<<" feet long."<<endl;
    
    //Exit Stage Right
    return 0;
}