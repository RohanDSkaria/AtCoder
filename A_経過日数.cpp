#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int y,m,d;cin>>y>>m>>d;
    if(m<3){
        y--;
        m+=12;
    }
    cout<<735369-(365*y+(y/4)-(y/100)+(y/400)+(306*(m+1)/10)+d-429)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/