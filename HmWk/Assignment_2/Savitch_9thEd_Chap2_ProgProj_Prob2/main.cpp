/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 18, 2015, 10:22 PM
 *      Purpose:
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Constants
const float PYINC=7.6e-2, MNTHS=12.0;

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Declare Variables
        float anSal,nuSal,nuMthpy,retPay;
        char ans;
        
        do{
           //Input variables
           cout<<"Your company is willingly giving you a 7.6% "<<endl;
           cout<<"increment to your salary for the past six months."<<endl;
           cout<<"To calculate your new annual salary"<<endl;
           cout<<endl;
           cout<<"Input you current annual salary (without commas): $";
           cin>>anSal;
           cout<<endl;
           
           //Calculate 
           nuSal=anSal+(anSal*PYINC); //New Annual Salary
           nuMthpy=nuSal/MNTHS; //New Monthly Salary
           retPay=((anSal*PYINC)/MNTHS)*6; //Retroactive Pay
           
           //Output Salary
           cout<<"Your new annual salary is: $"<<nuSal<<endl;
           cout<<"Your new monthly salary is: $"<<nuMthpy<<endl;
           cout<<"Your Retroactive Pay for the last six months is: $"<<retPay<<endl; 
           cout<<endl;
           cout<<"If you would like to restart the process, "<<endl;
           cout<<"Either Press (Y) for Yes or (N) for No, then press return:";
           cin>>ans;
           cout<<endl;
   }while (ans == 'y' || ans =='Y');
    //Exit Stage Right!
    return 0;
}

