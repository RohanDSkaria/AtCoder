#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<vector<string>> a(n,vector<string>(2));
	for(auto &i:a) cin>>i[0]>>i[1];
	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(a[j][0]==a[i][0] || a[j][0]==a[i][1] || a[j][1]==a[i][0] || a[j][1]==a[i][1]){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/