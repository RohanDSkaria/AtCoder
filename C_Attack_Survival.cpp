#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k,q;cin>>n>>k>>q;
	vector<int> a(n);
	for(int i=0,x; i<q; i++){
	    cin>>x;
	    a[x-1]++;
	}
	for(int i:a) cout<<(k-q+i>0?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/