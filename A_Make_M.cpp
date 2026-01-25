#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	vector<int> a(n),b(n);
	for(int& i:a) cin>>i;
	sort(a.begin(),a.end());
	for(int i=0,j=n-1,k=0; k<n; k++){
	    if(k&1) b[k]=a[j--];
	    else b[k]=a[i++];
	}
	for(int i=1; i+1<n; i+=2){
	    if(b[i-1]<b[i] && b[i]>b[i+1]) continue;
	    cout<<"No\n";
	    return;
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