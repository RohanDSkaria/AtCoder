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

void backtrack(vi &a, int idx, vi& part1, vi& part2, int sum1, int sum2, int& minDiff, vi& best1, vi& best2){
    if(idx == a.size()) {
        int diff = abs(sum1 - sum2);
        if(diff < minDiff) {
            minDiff = diff;
            best1 = part1;
            best2 = part2;
        }
        return;
    }
    part1.push_back(a[idx]);
    backtrack(a, idx + 1, part1, part2, sum1 + a[idx], sum2, minDiff, best1, best2);
    part1.pop_back();
    part2.push_back(a[idx]);
    backtrack(a, idx + 1, part1, part2, sum1, sum2 + a[idx], minDiff, best1, best2);
    part2.pop_back();
}
pair<vi, vi> divideArray(vi& a){
    vi part1, part2, best1, best2;
    int minDiff = INT_MAX;
    backtrack(a, 0, part1, part2, 0, 0, minDiff, best1, best2);
    return {best1, best2};
}
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    auto [b,c] = divideArray(a);
    cout<<max(accumulate(all(b),0ll),accumulate(all(c),0ll));
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/