#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size(),m=t.size(),ans=0;
    vector<vector<int>> nx(n+1,vector<int>(26));
    for(int i=0; i<26; i++) nx[n][i]=n;
    for(int i=n-1; i>=0; i--){
        nx[i]=nx[i+1];
        nx[i][s[i]-'a']=i;
    }
    for(int i=0; i<n; i++){
        int p=i,ya=1;
        for(int j=0; j<m; j++){
            int k=nx[p][t[j]-'a'];
            if(k==n){
                ya=0;
                break;
            }
            p=k+1;
        }
        ans+=ya?p-1-i:n-i;
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