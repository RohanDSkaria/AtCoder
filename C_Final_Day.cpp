#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
    vector<int> a(n),b;
    for(int& i:a){
        int x,y,z;cin>>x>>y>>z;
        i=x+y+z;
    }
    b=a;
    sort(a.rbegin(),a.rend());
    int t=a[k-1];
    for(int i:b) cout<<(i+300>=t?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/