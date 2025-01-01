/*WAP to print the sum of given number and its reverse.*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number =";
    cin>>n;
    int sum = 0;
    int r = 0;
    while (n != 0){
        int ld = n%10;
        r *= 10;
        r += ld;
        n /= 10;
        sum += ld;
    }
    cout<<"sum= "<<sum<<endl;
    cout<<"reverse = "<<r;

}  
 
       