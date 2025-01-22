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
    v<char> a(3);cin>>a;
    vi b(3);
    if(a[0]=='<') b[1]++;
    else b[0]++;
    if(a[1]=='<') b[2]++;
    else b[0]++;
    if(a[2]=='<') b[2]++;
    else b[1]++;
    for(int i=0; i<3; i++){
        if(b[i]==1) cout<<char('A'+i);
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/