#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
    vector<int> d(n);
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j+=i) d[j]++;
    }
    cout<<accumulate(d.begin(),d.end(),0ll)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/