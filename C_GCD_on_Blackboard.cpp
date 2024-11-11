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
    vi pre(n),suf(n);
    pre[0]=a[0];
    suf[n-1]=a[n-1];
    for(int i=1; i<n; i++) pre[i]=gcd(pre[i-1],a[i]);
    for(int i=n-2; i>=0; i--) suf[i]=gcd(suf[i+1],a[i]);
    int ans=max(pre[n-2],suf[1]);
    for(int i=1; i<n-1; i++){
        ans=max(ans,gcd(pre[i-1],suf[i+1]));
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/