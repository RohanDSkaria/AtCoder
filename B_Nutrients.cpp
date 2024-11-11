#include <n/stdc++.h>
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
    vi a(m);cin>>a;
    vi x(m);set<int> s;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int b;cin>>b;
            x[j]+=b;
        }
    }
    for(int i=0; i<m; i++){
        if(a[i]>x[i]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/