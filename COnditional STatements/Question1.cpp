//Take +ve integer input and tell if it divisible by 5 or not

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the positive Integer = ";
    cin>>x;
    if(x%5==0){
        cout<<"Divisible by 5";
    }
    else{
        cout<<"not divisible by 5";
    }


}