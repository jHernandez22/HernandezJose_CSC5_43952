/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on March 25, 2015, 8:50 AM
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
    float vwdHrs;//Hours Viewed (hrs)
    float package;//Package AaBbCc
    const int SIZE=40;//Max size of name=39
    char name[SIZE];//Customer Name
    float bill;//Cable Bill in $'s
   
    //Open the file
    out.open("Cable.dat");
   
    //Prompt the user for inputs
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C?"<<endl;
    cin>>package;
    cout<<"What is the customers name?"<<endl;
    cin.getline(name,SIZE);
  
    //Calculate the paycheck
    switch(package){
        case 'A':
        case 'a':{
            bill=9.95;
            if(vwdHrs>10)bill+=2*(vwdHrs-10);
            break;
       }                    
        case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=(vwdHrs-20);
            break;
        }    
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
        default: cout<<"Wrong Package Chosen"<<endl;
    };
    
    //Output the results to the file
    
    cout<<"Your cable bill For CSC5 RCC _PRogramming Class."<<endl;
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Package: "<<package<<endl;
    cout<<"Hours Vied: "<<vwdHrs<<endl;
    cout<<"Amount Owed: "<<bill<<endl;
    
    //Close the file
    out.close();
    
    //Exit Stage Right
    return 0;
}
