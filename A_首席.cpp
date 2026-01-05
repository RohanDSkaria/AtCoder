#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	double ans=0;
	while(n--){
	    double a,sum=0;
	    for(int i=0; i<5; i++){
	        cin>>a;
	        sum+=a;
	    }
	    sum+=(a*110.0)/900-a;
	    ans=max(ans,sum);
	}
	cout<<fixed<<setprecision(6)<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/