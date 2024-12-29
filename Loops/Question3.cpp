/*Print all the even numbers from 1 to 100*/

#include<iostream>
using namespace std;
int main(){
    //100 times loops
    for (int i=1;i<=100;i++){
           if(i%2==0) {
            cout<<i<<" ";
           }
    }


    //50 times loops
    for (int i=2;i<=100;i=i+2){
           if(i%2==0) {
            cout<<i<<" ";
           }
    }
}