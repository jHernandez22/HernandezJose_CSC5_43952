/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 4, 2015, 10:07 AM
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
    //Define Variables
    int numPods,psPod,totPs;
    
    //Input Numbers
    cout<<"Hello"<<endl;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>numPods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>psPod;
    
    //Calculate Total Peas
    totPs=numPods/psPod;
    
    //OutPut Results
    cout<<"If you have "<<numPods<<" pea pods"<<endl;
    cout<<"and "<<psPod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<totPs<<" peas in all the pods."<<endl;
    cout<<"Good-bye"<<endl;
    
    //Exit Stage Right
    return 0;
}