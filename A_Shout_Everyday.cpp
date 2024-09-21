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
    int a,b,c;cin>>a>>b>>c;
    if(b>c){
        if(a>=c && a<b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else{
        if(a>=c && a>b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
22 21 23
22 45 23
46
*/