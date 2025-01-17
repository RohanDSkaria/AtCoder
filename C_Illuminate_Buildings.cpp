#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,pair<F,S>& p){os<<"{"<<p.first<<","<<p.second<<"}";return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

// int ans;
// void fn(vi &a){
//     int n=a.size();
//     v<map<int,int>> dp(n);
//     // AC :
//     // for(int i=1; i<n; i++){
//     //     for(int j=0; j<i; j++){
//     //         int diff=a[i]-a[j];
//     //         dp[i][diff]=dp[j].count(diff)?dp[j][diff]+1:2;
//     //         ans=max(ans,dp[i][diff]);
//     //     }
//     // }
//     // TLE : (but if unordered_map then AC)
//     // for(int i=1; i<n; i++){
//     //     for(int j=0; j<i; j++){
//     //         int diff=a[i]-a[j];
//     //         dp[i][diff]=dp[j][diff]+1;
//     //         ans=max(ans,dp[i][diff]);
//     //     }
//     // }
//     // AC :
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             int diff=a[j]-a[i];
//             dp[j][diff]=dp[i][diff]+1;
//             ans=max(ans,dp[j][diff]);
//         }
//     }
// }
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    // ans=0;
    // map<int,vi> m;
    // for(int i=0; i<n; i++) m[a[i]].pb(i);
    // for(auto i:m) fn(i.second);
    // cout<<ans+1;
    int ans=1;
    for(int d=1; d<n; d++){
        vi dp(n,1);
        for(int j=d; j<n; j++) if(a[j]==a[j-d]) dp[j]=dp[j-d]+1;
        ans=max(ans,*max_element(all(dp)));
    }
    cout<<ans;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/