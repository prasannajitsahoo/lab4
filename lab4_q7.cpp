// library
#include<iostream>
#include<cmath>

using namespace std;

int main(){
//declaring variables
   float side , area ;
   cout << " Calculate the area of the Equilateral Triangle :"<<endl;
		 

   cout<<" Input the value of the side of the equilateral triangle: ";
   cin>>side;
//area of triangle
   area = sqrt(3) /4 * (side*side);

 cout<<" The area of equilateral triangle is: "<<area<<endl;
        cout << endl;
 return 0;
}
