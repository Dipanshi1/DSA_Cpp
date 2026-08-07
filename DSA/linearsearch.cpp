#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found = false;
    int x;
    cin>>x;
    for (int i=0;i<n;i++){
    if (arr[i] == x){
        found = true;
    }
}
    if (found){
        cout<<"Found"<<endl;
    }
    else{
            cout<<"Not Found"<<endl;    
        }
    return 0;
}