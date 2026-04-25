---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://qiita.com/drken/items/cce6fc5c579051e64fab
  bundledCode: "#line 2 \"structure/Potential_uf.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\n#define rep(i,n) for(ll i=0;i<n;i++)\n\
    \nstruct XORPotentialUF {//probably no use?\n    vector<int> par;\n    vector<ll>\
    \ wgt;  // \u5404\u30CE\u30FC\u30C9\u306E\u6839\u304B\u3089\u306E XOR \u5DEE\u5206\
    \n    vector<ll> rank; // \u6728\u306E\u9AD8\u3055\u7684\u306A\n\n    XORPotentialUF(int\
    \ size) : par(size),wgt(size,0),rank(size,0) {\n        rep(i,size) par[i]=i;\n\
    \    }\n\n    pair<ll,ll> find(int u) {\n        if (par[u]!=u) {\n          \
    \  int orig_par=par[u];\n            auto [root,diff]=find(orig_par);\n      \
    \      par[u]=root;\n            wgt[u]^=diff;\n            return {root,wgt[u]};\n\
    \        }\n        return {u,0};\n    }\n\n    bool limitunite(int u,int v,ll\
    \ z) {\n        auto [pu,ru]=find(u);\n        auto [pv,rv]=find(v);\n       \
    \ if (pu==pv) {\n            return (ru^rv)==z;\n        }\n        if (rank[pu]<rank[pv])\
    \ {\n            swap(pu,pv);\n            swap(ru,rv);\n        }\n\n       \
    \ par[pv]=pu;\n        wgt[pv]=ru^rv^z;\n\n        if (rank[pu]==rank[pv]) rank[pu]++;\n\
    \n        return true;\n    }\n\n    ll weight(int vertex) {\n        find(vertex);\n\
    \        return wgt[vertex];\n    }\n\n    ll diff_ytox(int x,int y) {//\u4F7F\
    \u3046\u6C17\u306F\u3057\u306A\u3044\n        return weight(x)^weight(y);\n  \
    \  }\n};\n\n\n\ntemplate<class ABEL> struct ADDPotentialUF { //0-indexed!! reference:\
    \ https://qiita.com/drken/items/cce6fc5c579051e64fab super\u611F\u8B1D\n\tvector<int>\
    \ par;\n\tvector<int> rank;\n\tvector<ABEL> wgt;\n\n\tADDPotentialUF(int size)\
    \ : par(size),wgt(size,0),rank(size,0) {\n        rep(i,size) par[i]=i;\n    }\n\
    \n\n\tpair<int, ABEL> find(int x) {\n        if (par[x]==x) {\n            return\
    \ {x,0};\n        } else {\n            auto [r,w]=find(par[x]);\n           \
    \ par[x]=r;\n            wgt[x]+=w;\n            return {r,wgt[x]};\n        }\n\
    \    }\n\n\tABEL weight(int x) {\n\t\tfind(x);\n\t\treturn wgt[x];\n\t}\n\n\t\
    bool issame(int x,int y) {\n\t\treturn find(x).first==find(y).first;\n\t}\n\n\t\
    bool unite(int x,int y,ABEL w) {\n\t\tw+=weight(x); w-=weight(y);\n\t\tx=find(x).first;\
    \ y=find(y).first;\n\t\tif (x==y) {\n            return (diff_ytox(x,y)==w);\n\
    \        }\n\t\tif (rank[x]<rank[y]) swap(x,y), w*=-1;\n\t\tif (rank[x]==rank[y])\
    \ ++rank[x];\n\t\tpar[y]=x;\n\t\twgt[y]=w;\n\t\treturn true;\n\t}\n\n\tABEL diff_ytox(int\
    \ x,int y) { //\u540C\u3058\u6210\u5206\u306B\u3044\u308B\u524D\u63D0\n\t\treturn\
    \ weight(y)-weight(x);\n\t}\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n#define rep(i,n) for(ll i=0;i<n;i++)\n\nstruct XORPotentialUF {//probably\
    \ no use?\n    vector<int> par;\n    vector<ll> wgt;  // \u5404\u30CE\u30FC\u30C9\
    \u306E\u6839\u304B\u3089\u306E XOR \u5DEE\u5206\n    vector<ll> rank; // \u6728\
    \u306E\u9AD8\u3055\u7684\u306A\n\n    XORPotentialUF(int size) : par(size),wgt(size,0),rank(size,0)\
    \ {\n        rep(i,size) par[i]=i;\n    }\n\n    pair<ll,ll> find(int u) {\n \
    \       if (par[u]!=u) {\n            int orig_par=par[u];\n            auto [root,diff]=find(orig_par);\n\
    \            par[u]=root;\n            wgt[u]^=diff;\n            return {root,wgt[u]};\n\
    \        }\n        return {u,0};\n    }\n\n    bool limitunite(int u,int v,ll\
    \ z) {\n        auto [pu,ru]=find(u);\n        auto [pv,rv]=find(v);\n       \
    \ if (pu==pv) {\n            return (ru^rv)==z;\n        }\n        if (rank[pu]<rank[pv])\
    \ {\n            swap(pu,pv);\n            swap(ru,rv);\n        }\n\n       \
    \ par[pv]=pu;\n        wgt[pv]=ru^rv^z;\n\n        if (rank[pu]==rank[pv]) rank[pu]++;\n\
    \n        return true;\n    }\n\n    ll weight(int vertex) {\n        find(vertex);\n\
    \        return wgt[vertex];\n    }\n\n    ll diff_ytox(int x,int y) {//\u4F7F\
    \u3046\u6C17\u306F\u3057\u306A\u3044\n        return weight(x)^weight(y);\n  \
    \  }\n};\n\n\n\ntemplate<class ABEL> struct ADDPotentialUF { //0-indexed!! reference:\
    \ https://qiita.com/drken/items/cce6fc5c579051e64fab super\u611F\u8B1D\n\tvector<int>\
    \ par;\n\tvector<int> rank;\n\tvector<ABEL> wgt;\n\n\tADDPotentialUF(int size)\
    \ : par(size),wgt(size,0),rank(size,0) {\n        rep(i,size) par[i]=i;\n    }\n\
    \n\n\tpair<int, ABEL> find(int x) {\n        if (par[x]==x) {\n            return\
    \ {x,0};\n        } else {\n            auto [r,w]=find(par[x]);\n           \
    \ par[x]=r;\n            wgt[x]+=w;\n            return {r,wgt[x]};\n        }\n\
    \    }\n\n\tABEL weight(int x) {\n\t\tfind(x);\n\t\treturn wgt[x];\n\t}\n\n\t\
    bool issame(int x,int y) {\n\t\treturn find(x).first==find(y).first;\n\t}\n\n\t\
    bool unite(int x,int y,ABEL w) {\n\t\tw+=weight(x); w-=weight(y);\n\t\tx=find(x).first;\
    \ y=find(y).first;\n\t\tif (x==y) {\n            return (diff_ytox(x,y)==w);\n\
    \        }\n\t\tif (rank[x]<rank[y]) swap(x,y), w*=-1;\n\t\tif (rank[x]==rank[y])\
    \ ++rank[x];\n\t\tpar[y]=x;\n\t\twgt[y]=w;\n\t\treturn true;\n\t}\n\n\tABEL diff_ytox(int\
    \ x,int y) { //\u540C\u3058\u6210\u5206\u306B\u3044\u308B\u524D\u63D0\n\t\treturn\
    \ weight(y)-weight(x);\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: structure/Potential_uf.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:37:18+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/Potential_uf.hpp
layout: document
redirect_from:
- /library/structure/Potential_uf.hpp
- /library/structure/Potential_uf.hpp.html
title: structure/Potential_uf.hpp
---
