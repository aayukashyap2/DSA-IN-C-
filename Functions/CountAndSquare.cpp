/*Write a function to count number of digits in a number and then print 
the square of this number */

#include<iostream>
using namespace std ;

//int square(int n){
//return n*n;
//}
int countDigitsSquare(int n)  {
   int count = 0;
   while (n) {
    count ++ ;
    n /= 10;
   }
   return count*count;    // return square (count);
}          
int main(){
    int n;
    cout<<"Enter the value of n  = ";
    cin>>n;
    cout<<countDigitsSquare(n)<<endl;
    
   // cout<< square (count);



    
}