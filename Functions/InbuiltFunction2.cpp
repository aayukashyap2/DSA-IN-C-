#include<iostream>
#include<cmath>
using namespace std;
int sum(int x, int y){  //this function never call so their is no role until it call
    return x+y;
}
int mini(int x,int y){
    int a;
    if(x<y) a = x;
    else a = y;
    return a;
}
int main(){
    //cout<<sum(40,63);
    int x,y;
    cin>>x>>y;
    // if(x>y) cout<<x;
    // else cout<<y;
    //cout<<max(x,y);
    cout<<sqrt(7);
} 