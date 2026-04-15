#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod=998244353;
int pom(int a, int b){int k=1;while(b){if(b&1)k=k*a%mod;a=a*a%mod;b>>=1;}return k;}

void solve(){
    int n;cin>>n;
    vector<int> a(n+2),b(n+2);
    for(int i=0; i<n; i++){
        int l,r;cin>>l>>r;
        a[l]++;
        a[r+1]--;
        int ll=max(1ll,n-r),rr=min(n-1,n-l);
        if(ll<=rr){
            b[ll]++;
            b[rr+1]--;
        }
    }
    for(int i=1; i<n; i++){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }

    vector<int> fac(n+1),inv(n+1);
    fac[0]=1;
    for(int i=1; i<=n; i++) fac[i]=(fac[i-1]*i)%mod;
    inv[n]=pom(fac[n],mod-2);
    for(int i=n; i>0; i--) inv[i-1]=(inv[i]*i)%mod;
    auto ncr=[&](int n, int r){
        if(r<0 || r>n) return 0ll;
        return (((fac[n]*inv[r])%mod)*inv[n-r])%mod;
    };

    int ans=0;
    for(int i=1; i<n; i++){
        int t=a[i]+b[i]-n;
        if(t<0) continue;
        int aa=a[i]-t,bb=b[i]-t;
        if(aa>i || bb>n-i) continue;
        ans=(ans+ncr(t,i-aa))%mod;
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/