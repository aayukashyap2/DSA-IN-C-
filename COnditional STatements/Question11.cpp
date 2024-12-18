/*Take +ve integer input and tell if it is divisible by 5 and 3 by nested IF-ELSE*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer =";
    cin>>n;

    if(n%5==0){
        if(n%3==0){
            cout<<"Number is divisible by 5 and 3";
        }
        else{ //n % 5==0 but n % 3 != 0 
            cout<<"not matching conditions";
        }
    }
    else{
        cout<<"condition not matching";
    }
}
