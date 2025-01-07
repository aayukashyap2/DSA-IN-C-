#include<iostream>
using namespace std;
void fun(int x, int y){     //FORMAL PARAMETERS
    cout<<"Address of Func x"<<&x<<endl;
     cout<<"Address of Func y"<<&y<<endl;

}
int main(){
    int x = 3;
    int y = 7; 
    cout<<"Address of Main x"<<&x<<endl;
     cout<<"Address of Main y"<<&y<<endl;
    fun(x,y);              //ACTUAL PARAMETERS
}