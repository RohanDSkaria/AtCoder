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

int d(int n){
    int c=0;
    while(n) c++,n/=10;
    return c;
}
void solve(){
    int a,b,x;cin>>a>>b>>x;
    int s=0,e=1e9;
    while(s<=e){
        int m=s+(e-s)/2;
        int k=a*m+b*d(m);
        if(k>x) e=m-1;
        else s=m+1;
    }
    cout<<e<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/