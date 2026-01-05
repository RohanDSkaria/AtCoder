#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
	vector<int> a(n-1);
	int sum=0,mn=1e9,mx=-1;
	for(int& i:a){
        cin>>i;
        sum+=i;
        mn=min(mn,i);
        mx=max(mx,i);
    }
	if(sum-mx>=k){
	    cout<<"0\n";
	    return;
	}
	if(k-sum+mn<=0){
	    cout<<k-sum+mn+mx<<'\n';
	    return;
	}
	cout<<"-1\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/