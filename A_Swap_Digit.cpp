#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
	string a,b;cin>>a>>b;
    const int mod=998244353;
	for(int i=0; i<n; i++) if(b[i]<a[i]) swap(a[i],b[i]);
	int k=0,t=0;
	for(int i=0; i<n; i++){
		k=(k*10+(a[i]-'0'))%mod;
		t=(t*10+(b[i]-'0'))%mod;
	}
	cout<<(k*t)%mod<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/