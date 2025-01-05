/*Print the given pattern
* * * * * *
*         *
*         *
* * * * * *   */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows =";
    cin>>n;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==4 || j==1 || j==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}