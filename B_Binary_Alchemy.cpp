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
    v<vi> a(n,vi(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) cin>>a[i][j];
    }
    // for(auto i:a) cout<<i<<endl;
    int ans=1;
    for(int i=0; i<n; i++){
        if(ans>=i+1) ans=a[ans-1][i];
        else ans=a[i][ans-1];
        // deb(ans)
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