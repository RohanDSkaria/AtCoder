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
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m;cin>>n>>m;
    set<vi> s;
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        s.insert({a,b});
        if(a<n && b<n-1) s.insert({a+1,b+2});
        if(a<n && b>2) s.insert({a+1,b-2});
        if(a<n-1 && b<n) s.insert({a+2,b+1});
        if(a<n-1 && b>1) s.insert({a+2,b-1});
        if(a>1 && b<n-1) s.insert({a-1,b+2});
        if(a>1 && b>2) s.insert({a-1,b-2});
        if(a>2 && b>1) s.insert({a-2,b-1});
        if(a>2 && b<n) s.insert({a-2,b+1});
    }
    // for(auto i:s) cout<<i<<endl;
    cout<<(n*n)-s.size()<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/