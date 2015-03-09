/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 6, 2015, 2:00 PM
 *      Purpose:
 */

//System Libraries
#include <iostream>//I/O Library
//This error
//#include < iostream>
//Produces this Result
//main.cpp:9:34: fatal error:  iostream: No such file or directory
//This error
//#include <iostream
//Produces this Result
//main.cpp:9:19: error: missing terminating > character
using namespace std;//I/O Library Under std namespace

//User Libraries

//Global Libraries

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //This error
    //int main( argc, char** argv) {
    //Produces this Results
    //main.cpp:27:11: error: ‘argc’ was not declared in this scope
    //main.cpp:27:17: error: expected primary-expression before ‘char’
    //main.cpp:27:28: error: expression list treated as compound expression in initializer [-fpermissive]
    //main.cpp:27:30: error: expected ‘,’ or ‘;’ before ‘{’ token
    //This error
    //int (int argc, char** argv) {
    //Produces this Results
    //main.cpp:27:6: error: expected unqualified-id before ‘int’
    //main.cpp:27:6: error: expected ‘)’ before ‘int’
    //This error
    //int main(int argc, char** argv {
    //Produces this Result
    //main.cpp:27:32: error: expected ‘)’ before ‘{’ token
    //This error
    //int main int argc, char** argv {
    //Produces this Result
    //main.cpp:27:10: error: expected initializer before ‘int’
   
    //Declare Variables
    int numPods,psPod,totPs;
    cout<<"Press return after entering a number."<<endl;
    //This error
    //cou<<"Press return after entering a number."<<endl;
    //Produces this Result
    //main.cpp:50:5: error: ‘cou’ was not declared in this scope
    
    //Input Variables
    cout<<"Enter the number of pods:"<<endl;
    cin>>numPods;
    //This error
    //ci>>numPods;
    //Produces this Result
    //main.cpp:56:5: error: ‘ci’ was not declared in this scope
    cout<<"Enter the number of peas in a pod:"<<endl;
    //This error
    //cout<<"Enter the number of peas in a pod:"<<endl
    //Produces this Result
    //main.cpp:73:5: error: expected ‘;’ before ‘cin’
    //This error
    //cout<<"Enter the number of peas in a pod:"<<
    //Produces this Result
    //main.cpp:61:49: error: expected primary-expression before ‘;’ token
    cin>>psPod;
    
    //Calculate
    totPs=numPods*psPod;
    
    //Output Results
    cout<<"If you have "<<numPods<<" pea pods"<<endl;
    //This error
    //cout"If you have "<<numPods<<" pea pods"<<endl;
    //Produces this Result
    //main.cpp:72:9: error: expected ‘;’ before string constant
    cout<<"and "<<psPod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<totPs<<" peas in all the pods."<<endl;

    //Exit Stage Right!
    return 0;
}
