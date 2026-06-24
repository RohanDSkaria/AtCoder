#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;cin>>n;
	string s;cin>>s;
    int a=0,b=0,c=0,m=n<<1;
    for(int i=0; i<m; i++){
        if(s[i]=='B') continue;
        a+=abs(i-2*c);
        b+=abs(i-2*c-1);
        c++;
    }
    cout<<min(a,b)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/