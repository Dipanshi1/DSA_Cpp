#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int n;
    cin>>n;
    int arr[100];
    for(int i =0; i < n; i++)
    cin>>arr[i];
    for(int i =0; i < n; i++)
    sum += arr[i];
    cout<<sum;
    }
    

