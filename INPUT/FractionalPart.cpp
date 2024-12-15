//Take float input and print the fractional part of the real number
#include<iostream>
using namespace std;
int main(){
 float x;
 cout<<"Enter the float number = ";
 cin>>x; //9.5

 int y = (int)x;  //stored integer part 9
 float z = (float)x; //z = 0.5
 x = x - y ;  //Minus integer part from real number 
 cout<<x;




}