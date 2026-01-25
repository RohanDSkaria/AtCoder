#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++) n-=i*j;
    }
    n=-n;
    for(int i=1; i<=n; i++){
        if(n%i) continue;
        if(!(n/i/10) && !(i/10)) cout<<i<<" x "<<n/i<<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/