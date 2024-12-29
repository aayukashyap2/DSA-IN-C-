/*Display this AP - 1,3,5,7,9... upto 'n' terms*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //1,3,5,7,9... // a+(n-1)d = 2n-1 => (last term)

    for(int i =1;i<=2*n-1; i+=2 ){
        cout<<i<< " ";
    }
}