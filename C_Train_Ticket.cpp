#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	string s;cin>>s;
	for(int i=0; i<8; i++){
    	string ans;
        ans+=s[0];
	    int k=s[0]-'0';
	    for(int j=0; j<3; j++){
	        if((i>>j)&1){
	            ans+='+';
	            ans+=s[j+1];
	            k+=s[j+1]-'0';
	        }
	        else{
	            ans+='-';
	            ans+=s[j+1];
	            k-=s[j+1]-'0';
	        }
	    }
	    if(k==7){
            ans+="=7";
	        cout<<ans<<'\n';
	        return;
	    }
	}
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/