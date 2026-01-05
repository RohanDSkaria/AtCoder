#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;cin>>n>>k;
	string s;cin>>s;
    for(int l=0,r=0,p; l<n; l=r){
        while(r<n && s[l]==s[r]) r++;
        if(s[l]=='1'){
            if(!(--k)){
                reverse(s.begin()+p,s.begin()+r);
                break;
            }
            p=r;
        }
    }
    cout<<s<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/