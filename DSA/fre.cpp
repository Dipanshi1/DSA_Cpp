#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    bool visited[n];
    for (int i=0; i<n; i++){
    visited[i] = false;}
    for(int i =0; i<n; i++){
        cin>>arr[i];
        if(visited[i])
            continue;
        int count = 0;
        for(int j =0; j<n; j++){
            if (arr[j]==arr[i]){
                count++;
                visited[j]=true;
            }
        }
    if(count > 1){
    cout << arr[i] << " " << count << endl;
    }       
  }
}