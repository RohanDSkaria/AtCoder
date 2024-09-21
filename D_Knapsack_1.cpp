// https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,w;cin>>n>>w;
    vi dp(w+1);
    for(int i=0; i<n; i++){
        int m,v;cin>>m>>v;
        for(int j=w-m; j>=0; j--) dp[j+m]=max(dp[j+m],dp[j]+v);
    }
    cout<<*max_element(all(dp))<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/