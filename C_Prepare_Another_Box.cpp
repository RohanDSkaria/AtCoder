#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n),b(n-1);
	for(int& i:a) cin>>i;
	for(int& i:b) cin>>i;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int ans=a[0],c=0;
	for(int i=n-1,j=n-2; j>=0 && i>=0; i--,j--){
	    if(a[i]>b[j]) c++,ans=a[i],j++;
	}
	if(c>1) cout<<"-1\n";
	else cout<<ans<<'\n';
	// sort(a.rbegin(),a.rend());
	// sort(b.rbegin(),b.rend());
    // int i=0;
    // while(i<n-1 && a[i]<=b[i]) i++;
    // for(int j=i; j<n-1; j++){
    //     if(a[j+1]>b[j]){
    //         cout<<"-1\n";
    //         return;
    //     }
    // }
    // cout<<a[i]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/