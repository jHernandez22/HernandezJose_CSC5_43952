/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 8, 2015, 10:12 PM
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
    //Declare Variables
    float numQtrs,NumDims,numNkls,totSum;
   
    //Input Numbers
    cout<<"Press return after entering a Number"<<endl;
    cout<<"Enter the number of Quarters."<<endl;
    cin>>numQtrs;
    cout<<"Enter the number of Dimes."<<endl;
    cin>>NumDims;
    cout<<"Enter the number of Nickels."<<endl;
    cin>>numNkls;
   
    //Calculate the Total Sum in Cents
    totSum=numQtrs*25+NumDims*10+numNkls*5;
    cout<<"The Total Sum of "<<numQtrs<<" Quarters, "<<NumDims<<" Dimes, and ";
    cout<<numNkls<<" Nickels is "<<totSum<<" cents."<<endl;
   
    //Exit Stage Right!
    return 0;
}

