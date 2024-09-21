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
    string s,t;cin>>s>>t;
    int n=s.size();
    vector<string> ans;
    int c=1,k=1;
    while(c){
        for(int i=0; i<n; i++){
            if(s[i]>t[i]){
                s[i]=t[i];
                ans.pb(s);
                c++;
                break;
            }
        }
        if(c>1) c=1;
        else break;
    }
    while(k){
        for(int i=n-1; i>=0; i--){
            if(s[i]<t[i]){
                s[i]=t[i];
                ans.pb(s);
                k++;
                break;
            }
        }
        if(k>1) k=1;
        else break;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/