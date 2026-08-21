#include<bits/stdc++.h>
using namespace std;
int main() {
string S;
string R;
cin>>S>>R;
int N;
cin>>N;
string ans = "";
for(int i=0; i<S.length(); i++){
if(i%N==0) {
ans += R;
}
ans+=S[i];
}
cout << ans;
return 0;
}