#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p = &x;
    cout<<x<<endl;
     
     *p = 6;          //updating the value of p by using * operator without accessing x directly
    cout<<x;
}