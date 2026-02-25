#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<string> a(n);
    for(auto& i:a) cin>>i;
    vector<vector<int>> dp(n,vector<int>(m,1e9));
    dp[0][0]=0;
    for(int j=1; j<m; j++) dp[0][j]=dp[0][j-1]+(a[0][j]=='#');
    for(int i=1; i<n; i++) dp[i][0]=dp[i-1][0]+(a[i][0]=='#');
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            dp[i][j]=min()
        }
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