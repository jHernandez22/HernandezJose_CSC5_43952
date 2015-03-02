/* 
 * File:   Main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 2, 2015, 9:39 AM
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std; //I/O Library Under std namespace

//User Libraries

//Global Libraries
//All Constants are CAPITALIZED
const float G=3.2174e1f;//Acceleration in ft/sec^2 on each
const float CNVFTMT=3.048e-1f;//Conversion form feet to meters

//System Prototype

//Execution Start Here!
int main(int argc, char** argv) {
    //Declare Variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=1/2*G*time*time;//Does not Work!!!!!
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2.0f*G*time*time;
    //dstnce=G*1/2*time*time;
    //dstnce=0.5f*G*time*time;
    dstnce=5e-1f*G*time*time;
    //Output the results
    cout<<"Distance Fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance Fallen = "<<dstnce*CNVFTMT<<"(meter)"<<endl;
    //Exit Stage Right
    return 0;
}