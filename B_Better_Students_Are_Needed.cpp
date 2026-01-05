#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,x,y,z;cin>>n>>x>>y>>z;
	vector<pair<int,int>> a(n),b(n),aa(n);
	vector<int> ans;
	for(int i=0; i<n; i++){
	    cin>>a[i].first;
	    a[i].second=i;
	    aa[i]=a[i];
	}
	for(int i=0; i<n; i++){
	    cin>>b[i].first;
	    b[i].second=i;
	}
	sort(a.begin(),a.end(),[&](auto &p, auto &q){
		if(p.first==q.first) return p.second<q.second;
		return p.first>q.first;
	});
	for(int i=0; i<x; i++){
		ans.push_back(a[i].second+1);
	    b[a[i].second].first=-1000;
	    aa[a[i].second].first=-1000;
	}
	sort(b.begin(),b.end(),[&](auto &p, auto &q){
		if(p.first==q.first) return p.second<q.second;
		return p.first>q.first;
	});
	for(int i=0; i<y; i++){
		ans.push_back(b[i].second+1);
	    b[i].first=-1000;
	    aa[b[i].second].first=-1000;
	}
	for(int i=0; i<n; i++){
		if(b[i].first<0) continue;
		aa[b[i].second].first+=b[i].first;
	}
	sort(aa.begin(),aa.end(),[&](auto &p, auto &q){
		if(p.first==q.first) return p.second<q.second;
		return p.first>q.first;
	});
	for(int i=0; i<z; i++) ans.push_back(aa[i].second+1);
	sort(ans.begin(),ans.end());
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