#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include <bits/stdc++.h>
#include "../structure/segmentTree.hpp"
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)


struct monoid {
    using T= long long;
    static T op(T a,T b) {return a+b; }
    static T e() {return 0ll; }
};

int main() {
    int n,q; cin >> n >> q;
    segtree<monoid> seg(n);
    rep(i,n) {
        ll x; cin>>x;
        seg.set(i,x);
    }
    rep(i,q) {
        ll ty; cin>>ty;
        if(ty==0) {
            ll p,x; cin>>p>>x;
            seg.add(p,x);
        } else if(ty==1) {
            ll l,r; cin>>l>>r;
            cout<<seg.prod(l,r)<<endl;
        }
    }
}