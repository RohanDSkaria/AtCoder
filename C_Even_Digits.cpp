#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    n--;
    string s;
    if(n==0) s="0";
    while(n){
        s+=(n%5*2)+'0';
        n/=5;
    }
    cout<<string(s.rbegin(),s.rend())<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/