// library
#include<iostream>
using namespace std;

int main(){
//declaring variables
float a ,b ,c ,d ,e ,total ,average , percentage ;
//obtained marks
cout<<" marks obtained in biology: ";
cin>>a;
cout<<" marks obtained in physics: ";
cin>>b;
cout<<" marks obtained in chemistry: ";
cin>>c;
cout<<" marks obtained in math: ";
cin>>d;
cout<<" marks obtained in cs: ";
cin>>e;
//total average and percentage
  total= a+b+c+d+e;
  average= (a+b+c+d+e) / 5 ;
  percentage= (a+b+c+d+e)/ 500 * 100;
//output
cout<<" total marks is: "<<total<<endl;
cout<<" average is: "<<average<<endl;
cout<<" percentage is: "<<percentage<<"%"<<endl;

return 0;
}
