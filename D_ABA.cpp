#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    string s;cin>>s;
    int n=s.size();
    v<vi> pre(n,vi(26)),suf(n,vi(26));
    for(int i=0; i<n; i++) pre[i][s[i]-'A']++;
    for(int i=n-1; i>=0; i--) suf[i][s[i]-'A']++;
    for(int i=1; i<n; i++){
        for(int j=0; j<26; j++){
            pre[i][j]+=pre[i-1][j];
        }
    }
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<26; j++){
            suf[i][j]+=suf[i+1][j];
        }
    }
    int ans=0;
    for(int j=1; j<n-1; j++){
        for(int i=0; i<26; i++){
            ans+=pre[j-1][i]*suf[j+1][i];
            // deb(j)
            // deb(pre[j-1][i])
            // deb(suf[j+1][i])
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/