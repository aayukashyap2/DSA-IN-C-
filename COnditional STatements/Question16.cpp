/*Take 2 integers input and print the greatest of them */
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the 1st number = ";
    cin>>x;
    cout<<"Enter the 2nd number = ";
    cin>>y;
    
    if(x>y){
        cout<<"x is greatest = "<<x;
    }
    else{
        cout<<"y is greatest = "<<y;
    }
}