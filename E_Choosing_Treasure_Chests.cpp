#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<pair<int,int>> a(n);
    for(auto& [x,y]:a) cin>>x>>y;
    set<int> s;
    auto fn=[&](auto& f, ){
        
    };
    for(int i=0; i<n; i++) cout<<(s.count(i)?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/