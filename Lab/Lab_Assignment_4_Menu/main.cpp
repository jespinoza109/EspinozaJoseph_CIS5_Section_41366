/* 
 * File:   Lab Assignment 4 - Menu
 * Author: Joseph Espinoza
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"[1]Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
    cout<<"[2]Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"[3]Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
    cout<<"[4]Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"[5]Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    
    cout<<"[6]Savitch_9thEd_Chap3_Prob1_RockPaperScissors"<<endl;
    cout<<"[7]Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    cout<<"[8]Savitch_9thEd_Chap3_Prob4_CompatibleSigns"<<endl<<endl;
    cout<<"Please Enter Case Number from Menu"<<endl;
    cin>>choice;
    
    switch(choice){
        
    case '1':
            //Declare Variables
           {string n1,  //Name 1
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
            }
    //Exit stage right or left!
    break;
    
    
    
    case '2':
            //Declare Variables
            int inp;

            //Initialize or input i.e. set variable values

            //Map inputs -> outputs

            //Display the outputs
            cout<<"Book Worm Points"<<endl;
            cout<<"Input the number of books purchased this month."<<endl;
            cin>>inp;
            cout<<"Books purchased =  "<<inp<<endl;

            cout<<"Points earned   = ";
                if (inp >= 4) {
                    cout<<60;

            }    else if (inp == 0) {
                    cout<<0;

            }    else if (inp == 1) {
                    cout<<5;

            }    else if (inp == 2) {
                    cout<<15;

            }    else if (inp == 3) {
                    cout<<30;
            }     
            //Exit stage right!
    break;
    
    
    
    case '3':
            //Declare Variables
            float begBal, numCheck, chckFee, monFee, newBal, lowBal;

            //Initialize or input i.e. set variable values
            cout<<"Monthly Bank Fees"<<endl;
            cout<<"Input Current Bank Balance and Number of Checks"<<endl;
            cin>>begBal>>numCheck;

            //Map inputs -> outputs
                if (numCheck<0)
            {  
                cout<<"Number of checks inputted in invalid";
            }
                else if (numCheck>0)
            {
                if (begBal<0)
            { 
                cout<<"Account is Overdrawn";
            }
                else if (begBal>0)
            {   
                        if (0<=numCheck&&numCheck<20)
                        chckFee=numCheck*0.10;

                        else if (20<=numCheck&&numCheck<=39)
                        chckFee=numCheck*0.08;

                        else if (40<=numCheck&&numCheck<=59)
                        chckFee=numCheck*0.06;

                        else if (numCheck>59)
                        chckFee=numCheck*0.04;


                        monFee=10;
                        begBal<400?lowBal=15.00:lowBal=0.00;
                        newBal=begBal-chckFee-monFee-lowBal;

            //Display the outputs
            cout<<fixed<<showpoint<<setprecision(2);
            cout<<"Balance     $ "<<setw(8)<<begBal<<endl;
            cout<<"Check Fee   $ "<<setw(8)<<chckFee<<endl;
            cout<<"Monthly Fee $ "<<setw(8)<<monFee<<endl;
            cout<<"Low Balance $ "<<setw(8)<<lowBal<<endl;
            cout<<"New Balance $ "<<setw(8)<<newBal;
        }
        }           
            //Exit stage right!
            
    break;
    
    
    
    case '4':
            //Declare Variables
            {string runner_1,
                   runner_2,
                   runner_3;



            unsigned short runner_1_time,
                runner_2_time,
                runner_3_time;


            cout << "Race Ranking Program" <<endl;
            cout << "Input 3 Runners" <<endl;
            cout << "Their names, then their times" <<endl;
            cin>>runner_1;
            cin>>runner_1_time;
            cin>>runner_2;
            cin>>runner_2_time;
            cin>>runner_3;
            cin>>runner_3_time;

            if (runner_1_time < 0 || 
                runner_2_time < 0 || 
                runner_3_time < 0)
            {
                cout << "Error. Runner times must be\n"
                     << "0 or greater.\n"
                     << "Rerun the program and try again." 
                     << endl;
            }
            else
            {
                if (runner_1_time < runner_2_time)
                {
                    if (runner_1_time < runner_3_time)
                    {
                        cout<<runner_1<<"\t"<<setw(3)
                             << runner_1_time 
                             << endl;
                        if (runner_2_time < runner_3_time)
                        {
                            cout<<runner_2<<"\t"<<setw(3)
                                 << runner_2_time 
                                 << endl;
                            cout<<runner_3<<"\t"<<setw(3) 
                                 << runner_3_time 
                                 << endl;
                        }
                        else
                        {
                            cout<< runner_3<<"\t"<<setw(3) 
                                 << runner_3_time 
                                 << endl;
                            cout<< runner_2<<"\t"<<setw(3) 
                                 << runner_2_time; 

                        }
                    }
                }
                if (runner_2_time < runner_3_time)
                {
                    if (runner_2_time < runner_1_time)
                    {
                        cout 
                             << runner_2<<"\t"<<setw(3)
                             << runner_2_time 
                             << endl;
                        if (runner_1_time < runner_3_time)
                        {
                            cout 
                                 << runner_1<<"\t"<<setw(3)
                                 << runner_1_time 
                                 << endl;
                            cout 
                                 << runner_3<<"\t"<<setw(3)
                                 << runner_3_time 
                                 << endl;
                        }
                        else
                        {
                            cout 
                                 << runner_3<<"\t"<<setw(3)
                                 << runner_3_time 
                                 << endl;
                            cout 
                                 << runner_1<<"\t"<<setw(3) 
                                 << runner_1_time; 

                        }
                    }
                }

                if (runner_3_time<runner_2_time)
                {
                    if (runner_3_time<runner_1_time)
                    {
                        cout<<runner_3<<"\t"<<setw(3)<<runner_3_time<<endl;

                        if (runner_1_time<runner_2_time)
                        {
                            cout<<runner_1<<"\t"<<setw(3)<<runner_1_time<< endl;
                            cout<<runner_2<<"\t"<<setw(3)<<runner_2_time; 

                        }
                        else
                        {
                            cout<<runner_2<<"\t"<<setw(3)<<runner_2_time; 
                            cout<<runner_1<<"\t"<<setw(3)<<runner_1_time; 

                        }
                    }
                }
            }
        }


 
    break; 
    
    case'5':
            //Declare Variables
            {string package;
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
            }    


            break;


            case'6':
                     //Declare Variables
                    {string r="r",   //Rock
                           R="R",   //Rock
                           s="s",   //Scissors
                           S="S",   //Scissors
                           p="p",   //Paper
                           P="P",   //Paper
                           plyr1,   //Choice for player 1
                           plyr2;   //Choice for player 2


                    //Initialize or input i.e. set variable values
                    cout<<"Rock Paper Scissors Game"<<endl;
                    cout<<"Input Player 1 and Player 2 Choices"<<endl;
                    cin>>plyr1;
                    cin>>plyr2;

                    //Map inputs -> outputs

                    //Display the outputs
                    if (plyr1==r || plyr1==R) {
                        if (plyr2==p || plyr2==P) {
                            cout<<"Paper covers rock.";
                        }else if(plyr2==s || plyr2==S) {
                            cout<<"Rock breaks scissors.";
                        }else if (plyr1==r && plyr2==R) {
                            cout<<"Nobody wins";
                        }
                    }else if (plyr1==p || plyr1==P) {
                        if (plyr2==r || plyr2==R) {
                            cout<<"Paper covers rock.";
                        }else if (plyr2==s || plyr2==S) {
                            cout<<"Scissors cuts paper.";
                        }else if(plyr1==P && plyr2==P) {
                            cout<<"Nobody wins";
                        }
                    }else if (plyr1==s || plyr1==S) {
                        if (plyr2==p || plyr2==P) {
                            cout<<"Scissors cuts paper.";
                        }else if(plyr2==r || plyr2==R) {
                            cout<<"Rock breaks scissors.";
                        }else if (plyr1==s && plyr2==S) {
                            cout<<"Nobody wins";
                        }
                    }
                } 

    break;
    
    
    case '7':
            //Declare Variables
            unsigned short numCnvr; 
            unsigned char    n1000, n100, n10, n1;


            //Initialize or input i.e. set variable values
            cout<<"Arabic to Roman numeral conversion."<<endl;
            cout<<"Input the integer to convert."<<endl;
            cin>>numCnvr;

            if (numCnvr>=1000 && numCnvr<=3000){
                cout<<numCnvr<<" is equal to ";


            //Map inputs -> outputs

                n1000=numCnvr/1000;
                n100=numCnvr%1000/100;
                n10=numCnvr%100/10;
                n1=numCnvr%10;

                cout<<(n1000==3?"MMM":
                       n1000==2?"MM":
                       n1000==1?"M":"");

                cout<<(n100==9?"CM":
                       n100==8?"DCCC":
                       n100==7?"DCC":
                       n100==6?"DC":
                       n100==5?"D":
                       n100==4?"CD":
                       n100==3?"CCC":
                       n100==2?"CC":
                       n100==1?"C":"");

                cout<<(n10==9?"XC":
                       n10==8?"LXXX":
                       n10==7?"LXX":
                       n10==6?"LX":
                       n10==5?"L":
                       n10==4?"XL":
                       n10==3?"XXX":
                       n10==2?"XX":
                       n10==1?"X":"");

                cout<<(n1==9?"IX":
                       n1==8?"VIII":
                       n1==7?"VII":
                       n1==6?"VI":
                       n1==5?"V":
                       n1==4?"IV":
                       n1==3?"III":
                       n1==2?"II":
                       n1==1?"I":"");



            //Display the outputs
            } else {
                cout<<numCnvr<<" is Out of Range!";
            }
    break;
    
    
    case'8':
            {string sign1,
                    sign2;

        int         horo1,  //horoscope entry 1
                    horo2;  //horoscope entry 2


        //Initialize Variables


        cout<<"Horoscope Program which examines compatible signs."<<endl;
        cout<<"Input 2 signs."<<endl;

        cin>>sign1;
        if(sign1=="Aries"){horo1=1;}
        if(sign1=="Leo"){horo1=1;}
        if(sign1=="Sagittarius"){horo1=1;}
        if(sign1=="Taurus"){horo1=2;}
        if(sign1=="Virgo"){horo1=2;}
        if(sign1=="Capricorn"){horo1=2;}
        if(sign1=="Gemini"){horo1=3;}
        if(sign1=="Libra"){horo1=3;}
        if(sign1=="Aquarius"){horo1=3;}
        if(sign1=="Cancer"){horo1=4;}   
        if(sign1=="Scorpio"){horo1=4;}    
        if(sign1=="Pisces"){horo1=4;}

        cin>>sign2;
        if(sign2=="Aries"){horo2=5;}
        if(sign2=="Leo"){horo2=5;}
        if(sign2=="Sagittarius"){horo2=5;}
        if(sign2=="Taurus"){horo2=6;}
        if(sign2=="Virgo"){horo2=6;}
        if(sign2=="Capricorn"){horo2=6;}
        if(sign2=="Gemini"){horo2=7;}
        if(sign2=="Libra"){horo2=7;}
        if(sign2=="Aquarius"){horo2=7;}
        if(sign2=="Cancer"){horo2=8;}   
        if(sign2=="Scorpio"){horo2=8;}    
        if(sign2=="Pisces"){horo2=8;}

        switch (horo1){
            case 1:
                if (horo2==5){
                cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
                }else {
                cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                }break;
            case 2:if (horo2==6){
                cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
                }else {
                cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                }break;
            case 3:if (horo2==7){
                cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
                }else {
                cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                }break;
            case 4:if (horo2==8){
                cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
                }else {
                cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                }break;
        }
    }
    
    
    //End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
    }
}
    