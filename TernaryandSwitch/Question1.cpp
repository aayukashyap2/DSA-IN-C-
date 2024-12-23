/*given the marks of the student.if the marks are greater than 33 print the result as pass 
otherwise fail without using if-else statement*/


#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the marks = ";
    cin >>m;

    (m>=33) ? cout<<"Pass" : cout<<"Fail";

}