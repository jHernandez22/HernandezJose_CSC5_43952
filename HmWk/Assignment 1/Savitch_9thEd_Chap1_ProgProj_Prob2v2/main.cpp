/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 * Created on March 6, 2015, 2:50 PM
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
    char c;
    char s;
    //Output Top 60*'s C S ! 60*'s Bottom 
    //Computer Science is Cool Stuff!!!
    //Prompt for letter C and S.
    cout<<"What letter would you like to use for c?"<<endl;
    cin>>c;
    cout<<"What letter would you like to use for s?"<<endl;
    cin>>s;
    cout<<"*************************************************"<<endl;
    cout<<"                                                 "<<endl;
    cout<<"           "<<c<<" "<<c<<" "<<c<<"            "<<s<<" "<<s<<" "<<s<<" "<<s<<"       !!     "<<endl;
    cout<<"         "<<c<<"       "<<c<<"        "<<s<<"         "<<s<<"     !!     "<<endl;
    cout<<"        "<<c<<"                "<<s<<"        "<<"        !!     "<<endl;
    cout<<"       "<<c<<"                  "<<s<<"               !!     "<<endl;
    cout<<"       "<<c<<"                    "<<s<<" "<<s<<" "<<s<<" "<<s<<"       !!     "<<endl;
    cout<<"       "<<c<<"                            "<<s<<"     !!     "<<endl;
    cout<<"        "<<c<<"                            "<<s<<"    !!     "<<endl;
    cout<<"         "<<c<<"       "<<c<<"        "<<s<<"         "<<s<<"           "<<endl;
    cout<<"           "<<c<<" "<<c<<" "<<c<<"            "<<s<<" "<<s<<" "<<s<<" "<<s<<"       00     "<<endl;
    cout<<"                                                 "<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"    Computer Science is Cool Stuff!!!            "<<endl;
    //Exit Stage Right!
    return 0;
}

