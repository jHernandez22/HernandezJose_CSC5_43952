/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on March 16, 2015, 8:50 AM
 *      Purpose: 
 */

//System Libraries
#include <iostream>//I/O Library
#include <iomanip>//Formating
#include <fstream>//I/O File
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Libraries

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;//Output the results in file
    float hrsWkd;//Hours Worked (hrs)
    float payRate;//Pat Rate ($'s/hrs)
    float oRate=1.5f;//Multiplicative factor of Pay Rate
    float oTime=40.0f;//Where overtime begins (hrs)
    float payChk;//Gross Pay ($'s)
   
    //Open the file
    out.open("Payroll.dat");
   
    //Prompt the user for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)?"<<endl;
    cin>>payRate;
  
    //Calculate the paycheck
    if (hrsWkd<oTime){
        payChk=payRate*hrsWkd;
    }
    if(hrsWkd>=oTime){
        payChk=payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    }
    //Output the results to the screen
    cout<<"Hours Worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"(hrs)"<<endl;
    cout<<"Over Time Rate = "<<oRate<<endl;
    cout<<"Gross Pay = "<<payChk<<endl;
  
    //Output the results to the file
    out<<"Hours Worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"(hrs)"<<endl;
    out<<"Over Time Rate = "<<oRate<<endl;
    out<<"Gross Pay = "<<payChk<<endl;
  
    //Close the file
    out.close();
    
    //Exit Stage Right
    return 0;
}
