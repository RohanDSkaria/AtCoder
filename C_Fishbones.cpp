#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(auto& [x,y]:a) cin>>x>>y;
    int m;cin>>m;
    vector<string> b(m);
    for(auto& i:b) cin>>i;
    map<int,set<pair<char,int>>> mp;
    for(auto& s:b){
        int t=s.size();
        for(int i=0; i<t; i++) mp[t].insert({s[i],i+1});
    }
    for(int j=0; j<m; j++){
        if(b[j].size()!=n){
            cout<<"No\n";
            continue;
        }
        bool ya=1;
        for(int i=0; i<n; i++){
            if(mp[a[i].first].count({b[j][i],a[i].second})) continue;
            cout<<"No\n";
            ya=0;
            break;
        }
        if(ya) cout<<"Yes\n";
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