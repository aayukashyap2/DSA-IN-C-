//Print the table of 19.

#include<iostream>
using namespace std;
int main(){
    //172 times loops
    for (int i=19;i<=190;i++){
           if(i%19==0) {
            cout<<i<<" "<<endl;
           }
    }

     //10 times loops
    for (int i=19;i<=190;i+=19){
           if(i%19==0) {
            cout<<i<<" ";
           }
    }
}