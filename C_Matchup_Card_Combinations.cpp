#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	map<int,map<int,int>> m;
	while(n--){
	    int a,b;cin>>a>>b;
	    m[a][b]++;
	}
	int ans=0;
	for(auto& [_,i]:m){
        int sum=0;
	    for(auto& [x,y]:i){
            ans+=y*sum;
            sum+=y;
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