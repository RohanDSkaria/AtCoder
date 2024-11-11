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
    int n,q;cin>>n>>q;
    string s;cin>>s;
    int cnt=0;
    for(int i=0; i<n-2; i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') cnt++;
    }
    while(q--){
        int x;
        char c;cin>>x>>c;
        x--;
        if(s[x]=='A'){
            if(x<n-2){
                if(s[x+1]=='B' && s[x+2]=='C') cnt--;
            }
        }
        if(s[x]=='B'){
            if(x!=0 && x!=n-1){
                if(s[x-1]=='A' && s[x+1]=='C') cnt--;
            }
        }
        if(s[x]=='C'){
            if(x>1){
                if(s[x-1]=='B' && s[x-2]=='A') cnt--;
            }
        }
        s[x]=c;
        if(s[x]=='A'){
            if(x<n-2){
                if(s[x+1]=='B' && s[x+2]=='C') cnt++;
            }
        }
        if(s[x]=='B'){
            if(x!=0 && x!=n-1){
                if(s[x-1]=='A' && s[x+1]=='C') cnt++;
            }
        }
        if(s[x]=='C'){
            if(x>1){
                if(s[x-1]=='B' && s[x-2]=='A') cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/