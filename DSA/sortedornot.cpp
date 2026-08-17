#include<iostream>
using namespace std;
int main(){
    int n, i;
    bool sorted = true; 
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for (int i =0; i<n-1; i++){
    if (arr[i] > arr[i+1]){
        sorted = false;
    }
} 
    if(sorted){
    cout << "Sorted";}
    else{
    cout << "Not Sorted";
  }
  return 0;}
