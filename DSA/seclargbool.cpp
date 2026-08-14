#include<iostream>
using namespace std;
int main(){
    int n; 
    cin >>n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    bool hassecond = false;
    int largest = arr[0];
    int secondLargest = largest;
    for(int i=1; i<n; i++){
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
    else if (arr[i]> secondLargest){
        secondLargest = arr[i];
        hassecond = true;
    }
    }
    if(hassecond){
        cout<< secondLargest << endl;
    }
    else{
        cout<< "No second largest element found." << endl;
    }
    return 0;  
}