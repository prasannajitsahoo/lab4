// library
#include<iostream>
 
using namespace std;
 
int main(){
//declaring variables
  float angle1 ,angle2 ,angle3;
  cout<<"find angle3 of a triangle"<<endl;
  cout<<"angle1:";
//input angle1
   cin>>angle1;
  cout<<"angle2:";
//input angle2
   cin>>angle2;
//value of angle3
     angle3= 180-(angle1+angle2);
//output
   cout<<"the angle3 is:"<<angle3<<endl;
    
    return 0;
}
