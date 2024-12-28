/*If the marks of A,B,and c are input through the keybord,write a program to determine
the student scoring least marks*/
#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter the marks of A =";
    cin>>A;
    cout<<"Enter the marks of B =";
    cin>>B;
    cout<<"Enter the marks of c =";
    cin>>C;

    if(A<=B && A<=C){
        cout<<"A scored the least";
    }
    else if (B<=A && B<=C) {
        cout<<"B scored the least";
    }
    else if (C<=A && C<=B) {
        cout<<"C scored the least";
    }
    else{
        cout<<"Invalid Input";
    }

}