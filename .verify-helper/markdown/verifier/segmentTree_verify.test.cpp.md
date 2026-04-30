---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: structure/segmentTree.hpp
    title: structure/segmentTree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"verifier/segmentTree_verify.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n#include <bits/stdc++.h>\n\
    #line 3 \"structure/segmentTree.hpp\"\nusing namespace std;\nusing ll = long long;\n\
    \n//main\u306B\u304A\u3044\u3066\u30E2\u30CE\u30A4\u30C9\u306E\u5B9A\u7FA9\u304C\
    \u3044\u308B\u3088\uFF01\ntemplate<class M> class segtree {\n    using T= typename\
    \ M::T;\n    ll n;\n    vector<T> seg;\n    ll siz=1;\n    public:\n        segtree(ll\
    \ n) : n(n) {\n            while(siz<n) siz*=2;\n            seg = vector<T>(2*siz,M::e());\n\
    \        }\n\n\n        segtree(const vector<T>& v) :n(v.size()) {\n         \
    \   while(siz<n) siz*=2;\n            seg = vector<T>(2*siz,M::e());\n       \
    \     for (ll i=0;i<(ll)v.size();++i) seg[siz+i]=v[i];\n            for (ll i=siz-1;i>0;--i)\
    \ seg[i]=M::op(seg[2*i],seg[2*i+1]);\n        }\n\n        void set(ll ind,T val)\
    \ {\n            ind+=siz;\n            seg[ind]=val;\n            while(ind>>=1)\
    \ seg[ind]=M::op(seg[2*ind],seg[2*ind+1]);\n        }\n\n        void add(ll ind,T\
    \ val) {\n            ind+=siz;\n            seg[ind]=M::op(seg[ind],val);\n \
    \           while(ind>>=1) seg[ind]=M::op(seg[2*ind],seg[2*ind+1]);\n        }\n\
    \n        T one_p(ll ind) {\n            return seg[ind+siz];\n        }\n\n \
    \       T prod(ll lef,ll rig) { // [l,r)\n            lef+=siz,rig+=siz;\n   \
    \         T opl=M::e(),opr=M::e();\n            for(;lef<rig;lef>>=1,rig>>=1)\
    \ {\n                if(lef&1) opl=M::op(opl,seg[lef++]);\n                if(rig&1)\
    \ opr=M::op(seg[--rig],opr);\n            }\n            return M::op(opl,opr);\n\
    \        }\n\n        template<class C> ll max_right(ll lef,C judge) {\n     \
    \       ll LEF=lef+siz,wid=1; //LEF=seg\u5217\u4E0A\u306E\u4F4D\u7F6E,lef=\u914D\
    \u5217\u4E0A\u306Eindex\n            T ansl=M::e();\n            for(;lef+wid<=n;LEF>>=1,wid<<=1)\
    \ if(LEF&1) {\n                if(!judge(M::op(ansl,seg[LEF]))) break;\n     \
    \           ansl=M::op(ansl,seg[LEF++]);\n                lef+=wid;\n        \
    \    }\n            while(LEF<<=1,wid>>=1) {\n                //if(wid==0) break;\n\
    \                if(lef+wid<=n && judge(M::op(ansl,seg[LEF]))) {\n           \
    \         ansl=M::op(ansl,seg[LEF++]);\n                    lef+=wid;\n      \
    \          }\n            }\n            return lef;\n        }\n\n        template<class\
    \ C> ll min_left(ll rig,C judge) {\n            ll RIG=rig+siz,wid=1;\n      \
    \      T ansr=M::e();\n            for(;rig-wid>=0;RIG>>=1,wid<<=1) if(RIG&1)\
    \ {\n                if(!judge(M::op(seg[RIG-1],ansr))) break;\n             \
    \   ansr=M::op(seg[--RIG],ansr);\n                rig-=wid;\n            }\n \
    \           while(RIG<<=1,wid>>=1) {\n                //if(wid==0) break;\n  \
    \              if(rig-wid>=0 && judge(M::op(seg[RIG-1],ansr))) {\n           \
    \         ansr=M::op(seg[--RIG],ansr);\n                    rig-=wid;\n      \
    \          }\n            }\n            return rig;\n        }\n};\n#line 4 \"\
    verifier/segmentTree_verify.test.cpp\"\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n\n\nstruct monoid {\n    using T= long long;\n    static\
    \ T op(T a,T b) {return a+b; }\n    static T e() {return 0ll; }\n};\n\nint main()\
    \ {\n    int n,q; cin >> n >> q;\n    segtree<monoid> seg(n);\n    rep(i,n) {\n\
    \        ll x; cin>>x;\n        seg.set(i,x);\n    }\n    rep(i,q) {\n       \
    \ ll ty; cin>>ty;\n        if(ty==0) {\n            ll p,x; cin>>p>>x;\n     \
    \       seg.add(p,x);\n        } else if(ty==1) {\n            ll l,r; cin>>l>>r;\n\
    \            cout<<seg.prod(l,r)<<endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    #include <bits/stdc++.h>\n#include \"../structure/segmentTree.hpp\"\nusing namespace\
    \ std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n\n\nstruct monoid {\n    using T=\
    \ long long;\n    static T op(T a,T b) {return a+b; }\n    static T e() {return\
    \ 0ll; }\n};\n\nint main() {\n    int n,q; cin >> n >> q;\n    segtree<monoid>\
    \ seg(n);\n    rep(i,n) {\n        ll x; cin>>x;\n        seg.set(i,x);\n    }\n\
    \    rep(i,q) {\n        ll ty; cin>>ty;\n        if(ty==0) {\n            ll\
    \ p,x; cin>>p>>x;\n            seg.add(p,x);\n        } else if(ty==1) {\n   \
    \         ll l,r; cin>>l>>r;\n            cout<<seg.prod(l,r)<<endl;\n       \
    \ }\n    }\n}"
  dependsOn:
  - structure/segmentTree.hpp
  isVerificationFile: true
  path: verifier/segmentTree_verify.test.cpp
  requiredBy: []
  timestamp: '2026-05-01 00:47:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verifier/segmentTree_verify.test.cpp
layout: document
redirect_from:
- /verify/verifier/segmentTree_verify.test.cpp
- /verify/verifier/segmentTree_verify.test.cpp.html
title: verifier/segmentTree_verify.test.cpp
---
