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
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << endl;return os;}

void solve(){
    int n,k;cin>>n>>k;
    vi a(n),ans(n,k/n);cin>>a;
    int r=k%n;
    map<int,int> m;
    for(int i=0; i<n; i++) m[a[i]]=i;
    for(auto [b,c]:m){
        if(r==0) break;
        ans[c]++;
        r--;
    }
    if(n==1) cout<<k<<endl;
    else cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/