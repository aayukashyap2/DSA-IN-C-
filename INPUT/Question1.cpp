//Guess the result??

#include<iostream>
using namespace std;
int main(){
    int num1 ;
    int p = 5 , q = 10;
    p += q -= p;  // p += -> p=p+q ,, right to left
    cout<<p<<" "<<q<<endl;
    return 0;
}