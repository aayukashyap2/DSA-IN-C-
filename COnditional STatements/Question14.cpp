/*Write a program to check whether a given character is vowel or a consonant*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Alphabet =";
    cin>>ch;

    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
       if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"The character is vowel";
       }
       else{
        cout<<"the character is consonent";
          }
    }
 else{
        cout<<"The character is not an alphabet";
    }

}