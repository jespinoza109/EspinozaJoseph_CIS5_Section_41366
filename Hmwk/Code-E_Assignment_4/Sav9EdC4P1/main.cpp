/* 
 * File:   Sav9EdC4P1
 * Author: Joseph Espinoza
 * Created on January 23, 2019, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    const float lit2gal= 0.264179;
    float MPGcomp(int, float, float);
    
    unsigned short liter, miles;
             float mpg, gal;
              char run;

    //Initialize or input i.e. set variable values
do
  {  cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>liter;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>miles;
    cout<<endl;
    

    
        
    //Map inputs -> outputs
        gal=liter*lit2gal;
        cout<<"miles per gallon:"<<endl;
        cout<<fixed<<setprecision(2);
        cout<<MPGcomp(miles,gal,mpg)<<endl;
        cout<<"Again:"<<endl;
        
        cin>>run;
        if(run=='y'){
            cout<<endl;
        }
    }while(run == 'y');
   
    
    
    //Display the outputs
 

    //Exit stage right or left
    
    return 0;
}

float MPGcomp(int miles, float gal, float mpg)
{    
    mpg=miles/gal;
    return mpg;
}   