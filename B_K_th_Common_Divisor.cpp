#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b,k;cin>>a>>b>>k;
	int g=__gcd(a,b);
	for(; k; g--) k-=(a%g==0 && b%g==0);
	cout<<g+1<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}