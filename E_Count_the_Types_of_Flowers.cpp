#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,q;cin>>n>>q;
	vector<int> a(n),ans(q);
	for(int& i:a) cin>>i;
    vector<pair<pair<int,int>,int>> b(q);
	for(int i=0; i<q; i++){
	    int l,r;cin>>l>>r;
        b[i]={{l-1,r-1},i};
	}
    sort(b.begin(),b.end());
    map<int,int> m;
    int l=0,r=0;
    for(auto& [i,j]:b){
        auto [x,y]=i;
        while(l<x){
            if(--m[a[l++]]==0) m.erase(a[l-1]);
        }
        while(r<=y) m[a[r++]]++;
        while(r-1>y){
            r--;
            if(--m[a[r]]==0) m.erase(a[r]);
        }
        ans[j]=m.size();
    }
    for(int i:ans) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/