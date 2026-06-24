#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
	int s=0,e=1e9;
	while(s<=e){
	    int m=s+(e-s)/2;
	    m*(2*n+m-1)>=2*k?e=m-1:s=m+1;
	}
	cout<<e<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/