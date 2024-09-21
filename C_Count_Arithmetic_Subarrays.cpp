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
    vi a(n),b;cin>>a;
    for(int i=1; i<n; i++) b.pb(a[i]-a[i-1]);
    int l=0,r=0,ans=0;
    while(r<n-1){
        if(b[l]==b[r]) r++;
        else{
            int k=r-l+1;
            ans+=k*(k-1)/2;
            l=r;
        }
    }
    int k=r-l+1;
    cout<<ans+n+(k*(k-1)/2)<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
3 3 6

*/