#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    v<pair<int,int>> a(n+1);
    a[n+1]={INT_MAX,0};
    a[0]={INT_MIN,0};
    for(int i=1; i<=n; i++){
        cin>>a[i].first;
    }
    for(int i=1; i<=n; i++){
        cin>>a[i].second;
    }
    sort(all(a));
    for(int i=2; i<=n; i++){
        a[i].second+=a[i-1].second;
    }
    // for(auto i:a) cout<<i.first<<" ";
    // bl
    // for(auto i:a) cout<<i.second<<" ";
    // bl bl
    auto cmp = [](const std::pair<int, int>& a, int target_first) {
        return a.first < target_first;
    };
    auto cmpu = [](int target, const pair<int, int>& a) {
        return target < a.first;
    };
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        auto rt=upper_bound(all(a),r,cmpu);
        auto lt=lower_bound(all(a),l,cmp);
        if(rt!=a.begin()) rt=prev(rt);
        if(lt!=a.begin()) lt=prev(lt);
        // cout<<"lt "<<(*lt).first<<endl;
        // cout<<"rt "<<(*rt).first<<endl;
        if(lt!=a.begin()) cout<<(*rt).second-(*lt).second<<endl;
        else cout<<(*rt).second<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/