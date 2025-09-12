#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    for(int i=0,cnt=0; i<=n; i++){
        if(i==n || s[i]=='C'){
            cout<<string(cnt/2,'A')<<string(cnt&1,'B');
            if(i!=n) cout<<'C';
            cnt=0;
        }
        else cnt+=1+(s[i]=='A');
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/