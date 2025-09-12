#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	vector<int> a(5);
	int ans=0,mx=0;
	for(int &i:a){
	    cin>>i;
	    int k=(10-i%10)%10;
        mx=max(mx,k);
        ans+=i+k;
	}
	cout<<ans-mx<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/