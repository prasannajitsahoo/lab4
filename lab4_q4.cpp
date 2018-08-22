//library
#include<iostream>
 
using namespace std;
 
int main(){
//declaring variables
    int year,days,weeks;
//input numbers of days
    cout<<"Enter No. of days:";
    cin>>days;
//no. of days in years and weeks and days
    year=days/365;
    weeks=days/7;
    days=days%7;
 //output
    cout<<"Years: "<<year<<endl;
    cout<<"Weeks: "<<weeks<<endl;
    cout<<"Days: "<<days<<endl;
    return 0;
}
