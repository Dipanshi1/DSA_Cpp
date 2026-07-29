#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,X,Y;
	cin>>N;
	cin>>X;
	cin>>Y;
	if (N>=2*X && N>=2*Y)
	cout<<"Yes";
	else if (N<2*X && N<2*Y)
    cout<<"NO";
    else if (N>=2*X && N<2*Y)
    cout<<"no";
    else if (N<2*X && N>=2*Y)
    cout<<"No";
    return 0;
    

}