#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl
#define all(a) a.begin(),a.end()
#define deb(x) cout << #x << " : " << x << endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,t=0;cin>>n;
    vi a(n);cin>>a;
    for(int i:a){
        int k=i/5;
        t+=(3*k)+(i%5);
        if(i%5==4) t--;
    }
    cout<<t<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while   (t--){
        solve();
    }
}