// library
#include<iostream>
using namespace std;

int main(){
    //declaring variables
    float km, met,cent;
	cout << " Convert centimeter into meter and kilometer :\n ";
    //input length in centimeter	
    cout << " Input the distance in centimeter : ";
    cin >> cent;
    //meter and kilometer in centimeter 
	met = (cent/100); 
	km = (cent/100000);
    //output
	cout << " The distance in meter is: "<< met << endl;
	cout << " The distance in kilometer is: "<< km << endl;	
	cout << endl;
    return 0;
}
