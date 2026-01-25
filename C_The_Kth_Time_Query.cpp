#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    map<int,vector<int>> m;
    for(int i=1,x; i<=n; i++){
        cin>>x;
        m[x].push_back(i);
    }
    while(q--){
        int x,k;cin>>x>>k;
        cout<<(k>m[x].size()?-1:m[x][k-1])<<'\n';
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