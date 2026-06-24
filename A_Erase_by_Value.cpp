#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n);
	map<int,int> m;
	int mx=0;
	for(int& i:a){
	    cin>>i;
	    mx=max(mx,++m[i]);
	}
    set<int> s;
	for(int i:a){
	    if(m[i]==mx) s.insert(i);
	}
    int t=a[n-1];
	for(int i=n-2; i>=0; i--){
        if(!s.count(a[i]) || a[i]<=a[i+1]) continue;
        t=a[i];
	}
	for(int i:a){
	    if(i==t) continue;
	    cout<<i<<' ';
	}
	cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/