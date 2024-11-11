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
    v<v<double>> a(n,v<double>(2));cin>>a;
    double ans=0;
    v<double> p={0,0};
    for(auto i:a){
        double k=p[0]-i[0],q=p[1]-i[1];
        ans+=sqrt(k*k + q*q);
        p=i;
    }
    double k=p[0],q=p[1];
    ans+=sqrt(k*k + q*q);
    cout << fixed << setprecision(10) <<ans<<endl;


}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/