/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 6, 2015, 2:09 PM
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
    int num1,num2,sum,product;
    
    //Input Numbers
    cout<<"Press return after entering an Number."<<endl;
    //cout<<"Enter the first integer."<<endl;
    //cin>>num1;
    //cout<<"Enter the second integer."<<endl;
    //cin>>num2;
    cout<<"Enter two integer."<<endl;
    cin>>num1>>num2;
    
    //Calculate Sum an Product
    sum=num1+num2;
    product=num1*num2;
    
    //Output Results
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<"."<<endl;
    cout<<"The product of "<<num1<<" and "<<num2<<" is "<<product<<"."<<endl;
    cout<<"This is the end of the program"<<endl;
    
    //Exit Stage Right!
    return 0;
}

