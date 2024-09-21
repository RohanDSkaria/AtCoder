#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    v<vi> dp(n+1,vi(2,0));
    for(int i=n-1; i>=0; i--){
        dp[i][0]=max(dp[i+1][0], 2*a[i]+dp[i+1][1]);
        dp[i][1]=max(dp[i+1][1], a[i]+dp[i+1][0]);
    }
    cout<<dp[0][1];
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/