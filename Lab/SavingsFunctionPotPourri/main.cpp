/* 
 * File:   main.cpp
 * Author: Hernandez, Jose A.
 * Created on April 20, 2015, 8:13 AM
 * 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Functions

//Function Prototypes
float save1(float,float,int);//power function
float save2(float,float,int);//exp and log function
float save3(float,float,int);//for loop
float save4(float,float,int);//recursive -> calling itself
float save5(float=100.0f,float=0.08f,int=9);//defaulted parameter
void save6(float &,float,float,int);//Pass By Reference
void save7(float &,float,int);//Pass By Reference
float save1(float,float,float);//Over Ridden Function/Same name

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv=100.0f;//Present value $'s
    float ir=0.08f;//Interest Rate %/yr
    int   nC=9;    //Number of compounding periods
    //Output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<ir*100<<"%"<<endl;
    cout<<"Number of Compounding Periods = "<<nC<<"(yrs)"<<endl<<endl;
    //Calculating Savings
    cout<<"Savings Function 1 = $"<<save1(pv,ir,nC)<<endl;
    float nCf=nC;
    cout<<"Savings Function 1 = $"<<save1(pv,ir,nCf)<<endl;
    cout<<"Savings Function 2 = $"<<save2(pv,ir,nC)<<endl;
    cout<<"Savings Function 3 = $"<<save3(pv,ir,nC)<<endl;
    cout<<"Savings Function 4 = $"<<save4(pv,ir,nC)<<endl;
    cout<<"Savings Function 4 = $"<<save5(pv,ir,nC)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv,ir)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv)<<endl;
    cout<<"Savings Function 5 = $"<<save5()<<endl;
    float fv;
    save6(fv,pv,ir,nC);
    cout<<"Savings Function 6 = $"<<fv<<endl;
    save7(pv,ir,nC);
     cout<<"Savings Function 7 = $"<<fv<<endl;
    
    return 0;
}

//Function for future value calculation
//Inputs
//      p-> Present Value $'s
//      i-> Interest Rate %/Compounding Period
//      n-> Compounding Period yr's
//Output
//      fv-> Future Value $'s

float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

float save1(float p,float i,float n){
    return p*pow((1+i),n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;//1st return
    return save4(p,i,n-1)*(1+i);//2nd return
}

float save5(float p,float i,int n){
    return p*pow((1+i),n);
}

void save6(float &f,float p,float i,int n){
    f=p*pow((1+i),n);
    
}

void save7(float &p,float i,int n){
    p=p*pow((1+i),n);
    
}