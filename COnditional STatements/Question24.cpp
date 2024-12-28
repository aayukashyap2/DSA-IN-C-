/*Write a c++ program to input any character and check whether it is the
alphabet,digit or special character.*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the characetr = ";
    cin>>ch;

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"The character is an Alphabet.";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"The character is Digit.";
    }
    else {
        cout<<"The character is special character.";
    }
}