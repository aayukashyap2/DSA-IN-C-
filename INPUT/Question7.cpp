/*WAP to find the difference between ASCII of two characters,taken them as input*/
#include<iostream>
using namespace std;
int main(){
    char x,y;
    cout<<"Enter the 1st character =";
    cin>>x;
    cout<<"Enter the 2nd character =";
    cin>>y;

    int z = x - y;
    cout<<"Required Difference = "<<z;
}