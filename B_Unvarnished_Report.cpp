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
    string s,t;cin>>s>>t;
    int n=s.size(),m=t.size();
    int a=0,b=0,ans=0;
    while(a<n && b<m){
        if(s[a]!=t[b]){
            cout<<a+1;
            return;
        }
        a++,b++;
    }
    while(a<n){
        cout<<a+1;
        return;
    }
    while(b<m){
        cout<<b+1;
        return;
    }
    cout<<0;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/