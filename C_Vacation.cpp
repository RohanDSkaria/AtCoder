// https://atcoder.jp/contests/dp/tasks/dp_c
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
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
    int n;cin>>n;
    vi dp(3);
    for(int d=0; d<n; d++){
        vi a(3),pd(3);cin>>a;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                if(i!=j) pd[j]=max(pd[j],dp[i]+a[j]);
        dp=pd;
    }
    cout<<max({dp[0],dp[1],dp[2]})<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/