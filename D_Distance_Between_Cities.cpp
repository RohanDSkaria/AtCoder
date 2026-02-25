#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(m,vector<int>(n));
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++) cin>>a[i][j];
    }
    int ans=0;
    for(int i=0; i<m; i++){
        sort(a[i].begin(),a[i].end());
        for(int j=0; j<n; j++) ans+=a[i][j]*(j-n+1+j);
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/