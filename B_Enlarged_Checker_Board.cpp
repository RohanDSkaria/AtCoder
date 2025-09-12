#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,a,b;cin>>n>>a>>b;
	string s=".#";
	for(int i=0; i<n*a; i++){
	    for(int j=0; j<n*b; j++) cout<<s[((i/a)+(j/b))&1];
	    cout<<'\n';
	}
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}