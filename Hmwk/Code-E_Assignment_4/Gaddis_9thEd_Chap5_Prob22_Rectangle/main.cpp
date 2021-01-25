/* 
 * File: Gaddis_9thEd_Chap5_Prob22_Rectangle
 * Author: Joseph Espinoza
 * Created on January 23, 2019, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int num; //value implemented for dimension
    char var; //variable used to make up the shape
    
    //Initialize or input i.e. set variable values
    cin>>num;
    cin>>var;
    
    //Map inputs -> outputs
        for (int i=0; i<num-1; i++) 
    {
            for(int j=0; j<num-1; j++)
            {
            cout<<var;
            }        
            cout<<var<<endl;
    }
    
        for(int k=0;k<num;k++)
        {
         cout<<var;
        }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}