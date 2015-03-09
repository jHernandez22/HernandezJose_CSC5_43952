/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 9, 2015, 1:21 AM
 *      Purpose:
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Libraries
unsigned char qrtr=25;
unsigned char dime=10;
unsigned char nickl=5;

//System Prototype

//Execution Start Here!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int x,y,z,qvalue,dvalue,nvalue;
    float total,dtotal;
    //Prompt Quarter Amount
    cout<<"Number of Quarters"<<endl;
    cout<<"Input Value as xxx."<<endl;
    cin>>x;
    //Prompt Dime Amount
    cout<<"Number of Dimes"<<endl;
    cout<<"Input Value as xxx"<<endl;
    cin>>y;
    //Prompt Nickel Amount
    cout<<"Number of Nickels"<<endl;
    cout<<"Input Value as xxx."<<endl;
    cin>>z;
    //Calculations begin here!
    qvalue=qrtr*x;//Value in quarters
    dvalue=dime*y;//Value in dimes
    nvalue=nickl*z;//Value in nickels
    total=qvalue+dvalue+nvalue;//Total value in cents
    cout<<"You have "<<total<<" cents"<<endl;


    //Exit Stage Right!
    return 0;
}

