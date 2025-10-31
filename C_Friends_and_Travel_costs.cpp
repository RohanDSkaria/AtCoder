#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    map<int,int> m;
    while(n--){
        int a,b;cin>>a>>b;
        m[a]+=b;
    }
    int c=0;
    for(auto &[a,b]:m){
        if(a-c>k) break;
        k-=a-c;
        k+=b;
        c=a;
    }
    cout<<c+k<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/