//find the output for this code

#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the first number:";
cin>>x;
int y,m;
cout<<"Enter second number and value for taking modulus\n";
cin>>y>>m;
int z = (x*y)%m;
cout<<"Output is :"<<z;
}
