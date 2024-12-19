/*Take  3 +ve integer input and Print the greatest of them 
without using multiple conditions like && , || etc*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st +ve integer = ";
    cin>>a;
    cout<<"Enter the 2nd +ve integer = ";
    cin>>b;
    cout<<"Enter the 3rd +ve integer = ";
    cin>>c; 

    if(a>b){
        if(a>c){
           cout<<a<<"is the greatest number";
        }
        else{ //c>a, a>b -> c>a>b
            cout<<c<<"is the greatest number";
        }
    }
    else{ //b>a
       if(b>c){
        cout<<b<<"is greatest";
       }
       else{ //c>b
         cout<<c<<"is greatest";
       }
    }
}