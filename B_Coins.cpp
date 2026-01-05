#include <bits/stdc++.h>
using namespace std;

long long floordiv(long long a,long long b){ if(b<0) a=-a,b=-b; if(b==0) return (long long)9e18; long long q=a/b; if((a^b)<0 && a%b) --q; return q; }
long long ceildiv(long long a,long long b){ if(b<0) a=-a,b=-b; if(b==0) return (long long)9e18; long long q=a/b; if((a^b)>=0 && a%b) ++q; return q; }

long long egcd(long long a,long long b,long long& x,long long& y){
    if(b==0){ x=1; y=0; return a; }
    long long x1,y1; long long g=egcd(b,a%b,x1,y1);
    x=y1; y=x1-(a/b)*y1; return g;
}

long long modinv(long long a,long long m){
    long long x,y; long long g=egcd(a,m,x,y);
    if(g!=1) return -1;
    x%=m; if(x<0) x+=m; return x;
}

// count solutions to bv*b + cv*c = X', with 0<=b<=B, 0<=c<=C
long long count_two(long long bv,long long cv,long long B,long long C,long long Xp){
    long long g=std::gcd(bv,cv);
    if(Xp%g) return 0;
    bv/=g; cv/=g; Xp/=g;
    long long inv=modinv((bv%cv+cv)%cv, cv);
    if(inv==-1) return 0;
    long long r=( (__int128)Xp*inv )%cv;
    long long L=ceildiv(Xp - cv*C, bv);
    long long R=floordiv(Xp, bv);
    L=max<long long>(L,0); R=min<long long>(R,B);
    if(L>R) return 0;
    long long t=cv;
    long long k=ceildiv(L - r, t);
    long long b0=r + k*t;
    if(b0>R) return 0;
    return (R - b0)/t + 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A,B,C,X; 
    long long va,vb,vc; 
    if(!(cin>>A>>B>>C>>X>>va>>vb>>vc)) return 0;

    struct Item{ long long vmax, vval, id; };
    vector<Item> it={{A,va,0},{B,vb,1},{C,vc,2}};
    sort(it.begin(), it.end(), [&](const Item& p,const Item& q){
        long long up1=min(p.vmax, X/p.vval), up2=min(q.vmax, X/q.vval);
        if(up1!=up2) return up1<up2;
        return p.vval>q.vval;
    });

    long long max0=it[0].vmax, v0=it[0].vval;
    long long max1=it[1].vmax, v1=it[1].vval;
    long long max2=it[2].vmax, v2=it[2].vval;

    long long up0=min(max0, X/v0), ans=0;
    for(long long a=0;a<=up0;++a){
        long long Xp=X - v0*a;
        ans += count_two(v1, v2, max1, max2, Xp);
    }
    cout<<ans<<"\n";
    return 0;
}
