/* 
 * File:   Gaddis_9thEd_Chap5_Prob13_MinMax
 * Author: Joseph Espinoza
 * Created on January 23, 2019, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Set the random number seed
    
    //Declare Variables
    const int ending=-99;
          int num, min, max;
    
    //Initialize or input i.e. set variable values
          cin>>num;
          min=max=num;
          
    //Map inputs -> outputs
    
     while(num!=ending)
    {
        if(num<min)
        min=num;
        
        if(num>max)
        max=num;
        
        cin>>num;
    }
        
        cout<<"Smallest number in the series is "<<min<<endl;
        cout<<"Largest  number in the series is "<<max;
        
    
    
    //Display the outputs
   
   //cout << "Average = " << (1.0*sum/count) <<endl;
    //Exit stage right or left!
    return 0;
}
