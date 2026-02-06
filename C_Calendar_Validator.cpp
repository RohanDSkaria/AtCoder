#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,m;cin>>n>>m;
    for(int i=0,x,y; i<n; i++){
        for(int j=0; j<m; j++){
            int v;cin>>v;
            if(i+j==0){
                x=(v-1)/7;
                y=(v-1)%7;
            }
            if((v-1)/7!=x+i || (v-1)%7!=y+j){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/