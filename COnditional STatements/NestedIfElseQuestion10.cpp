/*Take +ve integer input and tell if it is divisible by 5 or 3
but not divisible by 15*/
//Through Nested If-else

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a positive integer =";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%5!=0){
            cout<<"The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"condition not matching";
        }
    }
    else{
        cout<<"Not matching condition";
    }

}