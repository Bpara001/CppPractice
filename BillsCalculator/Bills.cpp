#include <iostream>
#include <cmath>
using namespace std;

const double EPercent=.75;
const double GPercent=.75;
const double WPeople=4;
//constants depending on Tenants

double Total_Bill(double W, double E,double G)
{
    double Total=0;
    Total =  (W/WPeople)  + ( (E*EPercent) /2) +  ( (G*GPercent) /2);
    cout<<"Water Total: "<<trunc((W/WPeople))<<endl;
    cout<<"Electricity Total: "<<trunc(((E*EPercent)/2))<<endl;
    cout<<"Gas Total: "<<trunc(((G*GPercent) /2))<<endl;
    return Total;

}//Formula For Calculating

int main(){
    //Variables
    double Water=0;
    double Electricity=0;
    double Gas=0;
    double amount=0;
    //Introduction to Program(User Input)
    cout<<"Bills Calculator"<<endl;
    cout<<"Please Enter Water Bill Total: "<<endl;
    cin>>Water;
    cout<<"Please Enter Electricity Total: "<<endl;
    cin>> Electricity;
    cout<<"Please Enter Gas Total: "<<endl;
    cin>>Gas;

    //Function Called for Displayed
    amount=Total_Bill(Water,Electricity,Gas);
    cout<<"Total Amount: "<<amount<<endl;
    amount=trunc(amount);
    cout<<"Truncated Total Amount: "<<amount<<endl;

    return 0 ;
}//End of Program