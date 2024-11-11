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
    v<string> s(8);cin>>s;
    set<int> r,c;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(s[i][j]=='#'){
                r.insert(i);
                c.insert(j);
            }
        }
    }
    int ans=0;
    for(int i=0; i<8; i++){
        if(r.count(i)) continue;
        for(int j=0; j<8; j++){
            if(c.count(j)) continue;
            ans++;
        }
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