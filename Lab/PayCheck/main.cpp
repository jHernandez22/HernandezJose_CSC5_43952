/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on February 23, 2015, 9:55 AM
 *            Flowchart!!!
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library Under std namespace

// User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
        //Declare Variables
        //Input
        //   Pay Rate = $'s/hr, hrsWrkd -> hrs
        //   Hours Worked = hrsWrkd -> hrs
        //Output: 
        //   Gross Pay Check Amount = payChk -> $'s
        float payRate, hrsWrkd, payChk;
        //Prompt the user for inputs
        cout<<"This program calculates your Gross Paychek"<<endl;
        cout<<"Input your Pay Rate as $xx.xx, Provided the x's"<<endl;
        cin>>payRate;
        cout<<"Input your Hours Worked this pay period."<<endl;
        cout<<"Format xxx.x, Provide the x's"<<endl;
        cin>>hrsWrkd;
        //Calculate the paycheck
        payChk=payRate*hrsWrkd;
        //Output the results
        cout<<"$"<<payChk<<" = $"<<payRate<<" /hr * "<<hrsWrkd<<"(hrs)"<<endl;
        //Exit Stage Right!
        
        return 0;
}

