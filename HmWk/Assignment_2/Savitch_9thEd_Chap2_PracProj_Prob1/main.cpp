/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 18, 2015, 9:50 PM
 *      Purpose:
 */

//System Libraries
#include <iostream>//I/O Library
#include <iomanip>//Formating
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Constants

//System Prototype

//Execution Start Here!

int main(int argc, char** argv) {
    //Declare Variables
    float mTon=35273.92, crlBox, totBoxs, mtBox;
    char ans;
    
    do{
        
        //Fixed decimal point, not using
        //iomanip for formatting
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(5);
    
        //Input Weight in ounces
        cout<<"Press return after input."<<endl;
        cout<<endl;
        cout<<"Enter cereal box weight in ounces: ";
        cin>>crlBox;
    
        //Convert ounces into metric Tons
        mtBox=crlBox/mTon;
        cout<<"Your cereal box weight is "<<mtBox<<" metric tons."<<endl;
    
        //Calculate amount of boxes
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        totBoxs=mTon/crlBox;
        cout<<"The amount of cereal boxes required to yield one metric ton are ";
        cout<<totBoxs<<" boxes."<<endl;
        cout<<endl;
        cout<<"If you would like to restart the process, "<<endl;
        cout<<"Either Press (Y) for Yes or (N) for No, then press return: ";
        cin>>ans;
        cout<<endl;
    }while (ans == 'y' || ans =='Y');

    //Exit Stage Right!
    return 0;
}

