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
    int n,q;cin>>n>>q;
    int l=1,r=2,ans=0;
    while(q--){
        char h;cin>>h;
        int t;cin>>t;
        if(h=='L'){
            int k;
            if(l<=t) k=t-l;
            else k=n-l+t;
            if(r==t) k=n;
            ans+=k;
            l=t;
        }
        else{
            int k;
            if(r<=t) k=t-r;
            else k=n-r+t;
            if(l==t) k=n;
            ans+=k;
            r=t;
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