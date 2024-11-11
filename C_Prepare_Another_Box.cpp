#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    vi a(n),b(n-1);cin>>a>>b;
    sort(all(a));
    sort(all(b));
    // deb(a)deb(b)
    int ans=a[0],ya=0;
    for(int i=n-1,j=n-2; i>=0 && j>=0;){
        if(a[i]>b[j]){
            if(ya){
                cout<<-1<<endl;
                return;
            }
            ans=a[i];
            ya=1;
            i--;
        }
        else i--,j--;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/