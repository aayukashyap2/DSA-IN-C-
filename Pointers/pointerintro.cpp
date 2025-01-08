#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;    //int *p = &x;  and same for other data types 


    float y = 4.9;    // do the same for other data type
    float* ptr = &y; 

    cout<<&x<<endl;
    cout<<p<<endl;

    cout<<&y<<endl;
    cout<<ptr;
}