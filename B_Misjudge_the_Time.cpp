#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int h,m;cin>>h>>m;
    while(1){
        int a=h/10*10+m/10,b=h%10*10+m%10;
        if(a<24 && b<60){
            cout<<h<<' '<<m<<'\n';
            return;
        }
        m++;
        if(m==60) m=0,h++;
        if(h==24) h=0;
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/