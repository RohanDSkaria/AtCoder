#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,t;cin>>n>>t;
	map<int,int> r,c;
	int ld=0,rd=0;
	for(int i=1; i<=t; i++){
	    int a;cin>>a;
	    int x=(a-1)/n,y=(a-1)%n;
	    if(++r[x]==n || ++c[y]==n || (ld+=(x==y))==n || (rd+=(x+y)==n-1)==n){
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