#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,ans=0;cin>>n;
	while(cin>>n){
        ans+=(n/5)*3;
        n%=5;
        while(n>0){
            ans++;
            ans%3?n--:n-=3;
        }
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/