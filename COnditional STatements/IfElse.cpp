//Take +ve integer input and tell if it is even or odd

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%2==0){
       cout<<"even";
    }
    // if(n%2 != 0){
    //     cout<<"odd";
    // }

    else{
        cout<<"odd";
    }

}