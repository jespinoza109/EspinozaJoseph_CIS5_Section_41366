/* 
 * File:   Gaddis_9thEd_Chap4_Prob8_SortNames
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Sort Names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Set the random number seed
    
 //Declare Variables
    string n1,  //Name 1
           n2,  //Name 2
           n3;  //Name 3
    
                  
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
            
    //Display the outputs
    if (n1>n2 && n2>n3) {
        cout<<n3<<endl;
        cout<<n2<<endl;
        cout<<n1;
    } else if(n1>n3 && n3>n2) {
        cout<<n2<<endl;
        cout<<n3<<endl;
        cout<<n1;
    } else if(n2>n1 && n1>n3) {
        cout<<n3<<endl;
        cout<<n1<<endl;
        cout<<n2;
    } else if(n2>n3 && n3>n1) {
        cout<<n1<<endl;
        cout<<n3<<endl;
        cout<<n2;
    }else if(n3>n2 && n2>n1) {
        cout<<n1<<endl;
        cout<<n2<<endl;
        cout<<n3;
    }else if(n3>n1 && n1>n2) {
        cout<<n2<<endl;
        cout<<n1<<endl;
        cout<<n3;
    }
    //Exit stage right or left!
    
    return 0;
}
