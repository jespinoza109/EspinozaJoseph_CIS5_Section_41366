/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
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

float inf(float a, float b)
{
    float i= 0;
    i = (a-b)/b*100;
    return i;
    
}
int main()
{
    
    int f = 1;
    float a, b;
    char c;
    while (f)
    {
        cout << "Enter.current.price:";
        cin >> a;
        cout <<  "Enter.year.ago.price:" ;
        cin >> b;
        
        if(inf(a,b)>=10)
            {
        cout << "Inflation.rate:" <<setprecision(4)<< inf(a,b) <<"%" <<endl  << endl << "Again:";
        }
        if (inf(a,b)<10)
           {
            cout << "Inflation.rate:" <<setprecision(3)<< inf(a,b) <<"%" <<endl  << endl << "Again:";
                           }
    cin >> c;
        
        if (c=='n') f=0;
        else if (c=='y') cout << endl;
    }
        
       
    return 0;
    
}
     
        
        
        
    
