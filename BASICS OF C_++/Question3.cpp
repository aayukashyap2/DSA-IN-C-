/* What is the output of this program?
void main() {
int a = 4;
int b = 5;
a++ ; b-- ;
cout<< ++a << " " << b--; }*/

#include<iostream>
using namespace std;
int main() {
    int a = 4;
    int b = 5;
    a++ ; b-- ;
    cout<< ++a << " " << b--;
}