#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    sort(a.begin(),a.end());
    int ans=0,j=n-1,k=max(0ll,2*m-n);
    while(k){
        ans+=a[j]*a[j];
        j--;
        k--;
    }
    for(int i=0; i<=j; i++){
        int t=a[i]+a[j--];
        ans+=t*t;
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