#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int sum=0,pre=0,mx=0;
    for(int k=0,x; k<n; k++){
        cin>>x;
        pre+=x;
        sum+=pre;
        mx=max(mx,x);
        cout<<sum+mx*(k+1)<<'\n';
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