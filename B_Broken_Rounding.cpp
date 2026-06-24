#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int x,k;cin>>x>>k;
	int t=10;
	while(k--){
	    int r=x%t;
        x/=t;
	    if(r*10>4*t) x++;
        x*=t;
	    t*=10;
	}
	cout<<x<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/