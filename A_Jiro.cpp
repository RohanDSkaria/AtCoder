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
    char ab,ac,bc;cin>>ab>>ac>>bc;
    if((ab=='<' && ac=='<' && bc=='<') || (bc=='>' && ac=='>' && ab=='>')) cout<<"B";
    else if((ab=='>' && bc=='<' && ac=='<') || (ab=='<' && bc=='>' && ac=='>')) cout<<"A";
    else if((ab=='<' && bc=='>' && ac=='<') || (ab=='>' && bc=='<' && ac=='>')) cout<<"C";
    bl
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
a b c
c b a

b a c
c a b

a c b
b c a
*/