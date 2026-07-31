#include<iostream>
using namespace std;
int main(){
    int count_even = 0;
    int count_odd = 0;
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
        if (arr[i] % 2 ==0){
            count_even++;
        }
        else{
            count_odd++;
        }

    }
    cout<<count_even<<endl;
    cout<<count_odd<<endl;
    return 0;
}
