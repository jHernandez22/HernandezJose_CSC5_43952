/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 4, 2015, 10:07 AM
 *      Purpose:
 */

//System Libraries
#include <iostream>//I/O Library
#include <cmath>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Libraries

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Define Variables
    int fncWth,fncLnth,totPrim;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the Width of Fence:"<<endl;
    cin>>fncLnth;
    cout<<"Enter the Length of Fence:"<<endl;
    cin>>fncWth;
    totPrim=(fncWth*2)+(fncLnth*2);
    cout<<"If you have a length of "<<fncLnth<<endl;
    cout<<"and a with of "<<fncWth<<", then"<<endl;
    cout<<"the total perimeter of the rectangle is "<<totPrim<<"."<<endl;
    
    //Exit Stage Right
    return 0;
}