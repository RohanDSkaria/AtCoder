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
    int n,ans=0;cin>>n;
    vi a,b;
    while(n--){
        int k;cin>>k;
        char c;cin>>c;
        if(c=='L') a.pb(k);
        else b.pb(k);
    }
    if(a.size()){
        for(int i=1; i<a.size(); i++) ans+=abs(a[i]-a[i-1]);
    }
    if(b.size()){
        for(int i=1; i<b.size(); i++) ans+=abs(b[i]-b[i-1]);
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