#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int main(){
    //cout<<sum(40,63);
    int x,y;
    cin>>x>>y;
    // if(x<y) cout<<x;
    // else cout<<y;
    cout<<min(x,y);
} 