/* 
 * File:   Gaddis_9thEd_Ch.2_Prob11_DistancePerTankofGas
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Distance Traveled in Town&Highway
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the Random Number Seed
    
    //Declare Variables
                 float Tank, //Number of Gallons the Car can hold
                       Town, //Average MPG in Town 
                       Highway, //Average MPG on Highway
                       Dist_T, //Total Distance in Town
                       Dist_H; //Total Distance in Highway
               
    //Initialize Variable
                       Tank=20; //Measured in Gallons
                       Town=23.5; //Avg MPG in Town
                       Highway=28.9; //Avg MPG on Highway 
            
    //Map Inputs to Outputs -> Process
                       Dist_T=Tank*Town;
                       Dist_H=Tank*Highway;
                         
    //Display Inputs/Outputs
    cout<<"Distance Traveled (Town) = "<<(Dist_T)<< "Miles" <<endl;
    cout<<"Distance Traveled (Highway) = "<<(Dist_H)<< "Miles" <<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
