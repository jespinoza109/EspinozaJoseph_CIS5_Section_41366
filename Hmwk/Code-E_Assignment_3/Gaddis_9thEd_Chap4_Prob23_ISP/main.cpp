/* 
 * File:  Gaddis_9thEd_Chap4_Prob23_ISP
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Monthly Bill by Package
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   string package;
            float time, price;
            
                
    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    cout<<"ISP Bill"<<endl;
     cin >> package;
    
    //Display the outputs
    
        // Package validation
            if ((package == "A") || (package == "B") || (package == "C")) 
                cout << "Input Package and Hours" <<endl;
                cin >> time;
 
        // Time validation
            if (time <= 744) 
     
        // Package A
            if (package == "A") {
            if (time > 10) {
                price = 9.95 + (time - 10) * 2;
            } else {
                    price = 9.95;
            }

        // Package B
            } else if (package == "B") {
            if (time > 20) {
                price = 14.95 + (time - 20) * 1;
            } else {
                price = 14.95;
            }

        // Package C
            } else {
            price = 19.95;
            }
            cout << "Bill = $ " << price;
            
    
      //Exit stage right or left!
    return 0;
    
}