#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
	vector<string> a(n);
    vector<int> b(n);
    for(auto& i:a) cin>>i;
    for(int j=0; j<m; j++){
        int c=0;
        for(int i=0; i<n; i++) c+=a[i][j]=='1';
        if(c==0 || c==n){
            for(int& i:b) i++;
        }
        else if(c>n/2){
            for(int i=0; i<n; i++){
                if(a[i][j]=='0') b[i]++;
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(a[i][j]=='1') b[i]++;
            }
        }
    }
    int mx=*max_element(b.begin(),b.end());
    for(int i=0; i<n; i++){
        if(b[i]==mx) cout<<i+1<<' ';
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/