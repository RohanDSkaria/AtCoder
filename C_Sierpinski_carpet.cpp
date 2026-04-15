#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<string> a;
void fn(int k, int n, int i, int j){
    if(k==0){
        a[i][j]='#';
        return;
    }
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            if(x==1 && y==1) continue;
            fn(k-1,n/3,i+x*n,j+y*n);
        }
    }
}
void solve(){
	int n;cin>>n;
    int k=1;
    for(int i=0; i<n; i++) k*=3;
    a=vector<string>(k,string(k,'.'));
	fn(n,k/3,0,0);
    for(auto& i:a) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/