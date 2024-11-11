// #include <bits/stdc++.h>
// using namespace std;
// #define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
// #define endl '\n'
// #define int long long
// #define pb(a) push_back(a)
// #define v vector
// #define vi v<int>
// #define bl cout<<endl;
// #define all(a) a.begin(),a.end()
// #define deb(x) cout<<#x<<" = "<<x<<endl;
// template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
// template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

// const int m = 998244353;
// int modInv(int a){
//     int ans=1,e=m-2;
//     while(e){
//         if(e&1) ans=(ans*a)%m;
//         a=(a*a)%m;
//         e>>=1;
//     }
//     return ans;
// }
// void solve(){
//     int n;cin>>n;
//     if(n==1) cout<<0<<endl;
//     else{
//         int p=(n*(n-1))%m;
//         int inv=modInv(4);
//         cout<<(p*inv)%m<<endl;
//     }
// }
// int32_t main(){
//     IOS int t=1;
//     cin>>t;
//     while(t--) solve();
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long

int M = 998244353;

int Power(int x, int y){
    int res = 1;
    while (y){
        if (y % 2){
            res *= x;
            res %= M;
        }
        x *= x;
        x %= M;
        y >>= 1;
    }
    return res;
}

int ModInv(int a){
    return Power(a, M - 2);
}


int inv3 = ModInv(3);

void solve(){
    int n; cin >> n;
    int S0 = (Power(4, n + 1) - 4) * inv3;
    int np = n * Power(4, n + 1);
    np %= M;
    S0 %= M;
    int S1 = (np - S0) * inv3;
    S1 %= M;
    np = (np * n) % M;
    int S2 = ((np - 2 * S1 + S0) % M) * inv3;
    S2 %= M;
    np = (np * n) % M;
    int S3 = ((np - 3 * S2 + 3 * S1 - S0) % M) * inv3;
    S3 %= M;
    int ans = ((n * S2) % M - S3);
    ans %= M;
    ans *= ModInv(Power(4, n + 1));
    ans %= M;
    ans = (ans + M) % M;
//    cout << endl;
//    cout << S0 << ' ' << S1 << ' ' << S2 << ' ' << S3 << endl;
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}