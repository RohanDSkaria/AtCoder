#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    double a,b,d;cin>>a>>b>>d;
    const double pi=acos(-1.0);
    d*=pi/180.0;
    double theta=atan2(b,a)+d,dis=sqrt(a*a+b*b);
    cout<<fixed<<setprecision(6)<<cos(theta)*dis<<' '<<sin(theta)*dis<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/