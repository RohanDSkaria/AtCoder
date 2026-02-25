#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    sort(a.rbegin(),a.rend());
    int ans=0;
    for(int i=0,j=n-1; i<j; i++){
        if(a[i]%a[j]) a.push_back(a[i]%a[j++]);
        ans++;
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