#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,h;cin>>n>>h;
	vector<vector<int>> a(n,vector<int>(3));
	for(auto& i:a) for(int& j:i) cin>>j;
	int l=h,r=h;
    for(int i=0; i<n; i++){
        int t=a[i][0]-(i?a[i-1][0]:0);
        l-=t;
        r+=t;
        l=max(l,a[i][1]);
        r=min(r,a[i][2]);
        if(l>r){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/