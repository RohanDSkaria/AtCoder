#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s,t;cin>>s>>t;
    map<char,int> n,m;
    for(char c:s) n[c]++;
    for(char c:t) m[c]++;
    string at="atcoder";
    int k=0;
    for(char c='a'; c<='z'; c++){
        if(n[c]==m[c]) continue;
        if(at.find(c)==-1){
            cout<<"No\n";
            return;
        }
        if(n[c]<m[c]) k+=m[c]-n[c];
    }
    cout<<(k<=n['@']?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/