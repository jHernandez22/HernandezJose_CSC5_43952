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
     int numPods,psPod,sum,product;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods and number of peas in a pod:"<<endl;
    cin>>numPods>>psPod;
    //cout<<"Enter the number of peas in a pod:"<<endl;
    //cin>>psPod;
    sum=numPods+psPod;
    cout<<"If you have "<<numPods<<" pea pods"<<endl;
    cout<<"and "<<psPod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<totPs<<" peas in all the pods."<<endl;
    cout<<"This is the end of the program"<<endl;
    //Exit Stage Right!
    return 0;
}

