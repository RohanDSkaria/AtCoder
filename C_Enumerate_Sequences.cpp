#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void fn(v<vi> &ans, vi &t, vi &a, int i, int sum, int k){
    if(sum%k==0 && t.size()==a.size()){
        ans.pb(t);
        return;
    }
    int sz=a.size();
    for(int g=1; g<=a[i]; g++){
        t.pb(g);
        fn(ans,t,a,i+1,sum+g,k);
        t.pop_back();
    }
}
void solve(){
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    v<vi> ans;
    vi t;
    fn(ans,t,a,0,0,k);
    for(auto i:ans) cout<<i<<endl;
    cout<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/