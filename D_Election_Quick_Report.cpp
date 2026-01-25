#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	auto cmp=[](auto a, auto b){
	    if(a.second==b.second) return a.first>b.first;
        return a.second<b.second;
	};
	priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp)> pq(cmp);
    map<int,int> mp;
	while(m--){
	    int x;cin>>x;
	    mp[x]++;
        pq.push({x,mp[x]});
        cout<<pq.top().first<<'\n';
	}
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/