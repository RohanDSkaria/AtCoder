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
    int n,m;cin>>n>>m;
    map<int,char> mp;
    for(int i=0; i<m; i++){
        int a;
        char b;cin>>a>>b;
        if(mp.count(a)){
            if(mp[a]=='M'){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        else{
            if(b=='M') mp[a]=b;
            if(b=='M'){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/