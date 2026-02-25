#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<pair<int,int>> a(n);
    for(auto& [x,y]:a) cin>>x>>y;
    vector<vector<int>> dp(n,vector<int>(m+1,-1));
    for(int i=0; i<n; i++) dp[i][a[i].second]=a[i].first;
    vector<deque<int>> dq;
    for(int i=0; i<n; i++){
        for(int w=0; w<=m; w++){
            // for(int j=i+1; j<=min(n-1,i+k); j++){
            //     int t=w+a[j].second;
            //     if(t>m) continue;
            //     dp[j][t]=max(dp[j][t],dp[i][w]+a[j].first);
            // }
            dp[i][w]=max(dp[i][w],t[j]);
        }
    }
    int ans=0;
    for(auto& i:dp) ans=max(ans,*max_element(i.begin(),i.end()));
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