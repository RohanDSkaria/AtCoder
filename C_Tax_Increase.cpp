#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b;cin>>a>>b;
	for(int i=1; i<10000; i++){
	    if(8*i/100==a && 10*i/100==b){
	        cout<<i<<'\n';
	        return;
	    }
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