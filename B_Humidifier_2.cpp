#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m,d;cin>>n>>m>>d;
	string s,t;
	for(int i=0; i<n; i++){
		cin>>t;
		s+=t;
	}
	int k=n*m,ans=0;
	for(int i=0; i<k; i++){
		if(s[i]=='#') continue;
		for(int j=0; j<k; j++){
			if(s[j]=='#') continue;
			int c=0;
			for(int x=0; x<k; x++){
				if(s[x]=='#') continue;
				bool ya=0;
				for(int g:{i,j}) ya|=abs((x/m)-(g/m))+abs((x%m)-(g%m))<=d;
				c+=ya;
			}
			ans=max(ans,c);
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