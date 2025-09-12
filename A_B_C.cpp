#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int l,r;cin>>l>>r;
	int k=max(0ll,r+1-2*l);
	cout<<k*(k+1)/2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}