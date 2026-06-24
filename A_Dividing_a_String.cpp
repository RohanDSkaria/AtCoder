#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
    int n=s.size();
    vector<vector<int>> ans(n,vector<int>(2,1));
    for(int i=1; i<n; i++){
        ans[i][0]=ans[i-1][1]+1;
        if(s[i]!=s[i-1]) ans[i][0]=max(ans[i][0],ans[i-1][0]+1);
        if(i==1) continue;
        ans[i][1]=ans[i-2][0]+1;
    }
    cout<<max(ans[n-1][0],ans[n-1][1])<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/