#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,1,4,5,6,7,8,2,4,6,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;
}