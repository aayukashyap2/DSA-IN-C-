//Write a program to check whether a character is an alphabet or not.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character = ";
    char ch;
    cin>>ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
     cout<<"The character is alphabet";
    }
    else{
        cout<<"The character is not an alphabet";
    }
}