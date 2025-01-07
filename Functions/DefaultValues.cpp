#include<iostream>
using namespace std;
void fun(int x=7 , int y=8){  /* 7 is now default value of x
                                 8 is now default value of y */
    cout<<x<<" "<<y;

}
int main(){
   
   fun(4,6 );     //now 4 and 6 are original values so it'll be printed due to call
}