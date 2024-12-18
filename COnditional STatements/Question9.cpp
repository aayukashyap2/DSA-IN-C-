/*Take +ve integer input and tell if it is divisible by 5 or 3
but not divisible by 15*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer =";
    int n;
    cin>>n;

    if((n%5==0 || n%3==0) && n%15!=0 ){
        cout<<"Number is divisible by 5 or 3 but not 15";
    }
    else{
        cout<<"Not matching the conditions"; 
    }
}