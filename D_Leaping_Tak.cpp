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

const int m=998244353;
void solve(){
    int n,k;cin>>n>>k;
    vi a(n+1),dp(n+1);
    while(k--){
        int x,y;cin>>x>>y;
        a[x]+=1;
        if(y!=n) a[y+1]-=1;
    }
    for(int i=1; i<=n; i++) a[i]+=a[i-1];
    dp[1]=1;
    for(int i=1; i<=n; i++){
        int ans=0;
        for(int j:a){
            if(!j) continue;
            if(i-j>0) ans=(ans+dp[i-j])
        }
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
0  1  2  3   4  5  6
   1  0  -1  1  0  0
*/