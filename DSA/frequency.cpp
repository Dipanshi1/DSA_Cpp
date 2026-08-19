#include<iostream>
using namespace std;
int main(){
    int n,x, count = 0;
    cin >>n;
    int arr[n];
    cin>>x;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i] == x){
            count++;
        }
    }
    cout<<count;
}