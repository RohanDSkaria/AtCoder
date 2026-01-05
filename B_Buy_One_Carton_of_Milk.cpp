#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,a,b,c;cin>>n>>a>>b>>c;
    vector<int> dp(101);
    for(int i=1; i<7; i++) dp[i]=min({a,b,c});
    for(int i=7; i<9; i++) dp[i]=min({a<<1,b,c});
    for(int i=9; i<13; i++) dp[i]=min({a<<1,b<<1,c});
    for(int i=13; i<101; i++) dp[i]=min({dp[i-6]+a,dp[i-8]+b,dp[i-12]+c});
    cout<<dp[n]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/