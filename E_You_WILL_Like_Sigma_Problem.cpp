#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m),pre(n+1);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    const int mod=998244353;
    for(int i=0; i<n; i++){
        a[i]%=mod;
        pre[i+1]=pre[i]+a[i];
    }
    int sa=0,sb=0;
    for(int i=0; i<n; i++) sa+=a[i]*(i+1);
    sa%=mod;
    for(int j=0; j<m; j++){
        b[j]%=mod;
        sb+=b[j];
    }
    sb%=mod;
    int sec1=(sa*sb)%mod,sec2=0;
    for(int j=0; j<m; j++){
        if(!b[j]) continue;
        int jj=j+1,Cj=(b[j]*jj)%mod,fj=0;
        for(int q=1; q*jj<=n; q++){
            int lo=q*jj;
            int hi=min(lo+jj-1,n);
            int rangeSum=pre[hi]-pre[lo-1];
            fj+=q*(rangeSum%mod);
        }
        sec2+=Cj%mod*(fj%mod+mod)%mod;
        sec2%=mod;
    }
    cout<<((sec1-sec2)%mod+mod)%mod<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/