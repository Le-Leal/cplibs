---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verifier/UnionFind_verify.test.cpp
    title: verifier/UnionFind_verify.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"structure/UnionFind.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\nusing ll = long long;\n\
    \nstruct UnionFind {\n    vector<int> par;\n    vector<int> siz;\n    int count;\n\
    \    UnionFind(int N):par(N),siz(N,1),count(N){\n        rep(i,N) par[i]=i;\n\
    \    }\n    int root(int x){\n        return par[x]==x?x:par[x]=root(par[x]);\n\
    \    }\n    void unite(int x,int y){\n        int rx=root(x),ry=root(y);\n   \
    \     if(rx==ry) return;\n        count--;\n        if(siz[rx]<siz[ry]) {\n  \
    \          par[rx]=ry;\n            siz[ry]+=siz[rx];\n            siz[rx]=0;\n\
    \        }\n        else {\n            par[ry]=rx;\n            siz[rx]+=siz[ry];\n\
    \            siz[ry]=0;\n        }\n    }\n    bool same(int x,int y){\n     \
    \   return root(x)==root(y);\n    }\n    int comp_count() const{\n        return\
    \ count;\n    }\n    int size(int x) {\n        return siz[root(x)];\n    }\n\
    };\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\nusing ll = long long;\n\nstruct UnionFind {\n    vector<int>\
    \ par;\n    vector<int> siz;\n    int count;\n    UnionFind(int N):par(N),siz(N,1),count(N){\n\
    \        rep(i,N) par[i]=i;\n    }\n    int root(int x){\n        return par[x]==x?x:par[x]=root(par[x]);\n\
    \    }\n    void unite(int x,int y){\n        int rx=root(x),ry=root(y);\n   \
    \     if(rx==ry) return;\n        count--;\n        if(siz[rx]<siz[ry]) {\n  \
    \          par[rx]=ry;\n            siz[ry]+=siz[rx];\n            siz[rx]=0;\n\
    \        }\n        else {\n            par[ry]=rx;\n            siz[rx]+=siz[ry];\n\
    \            siz[ry]=0;\n        }\n    }\n    bool same(int x,int y){\n     \
    \   return root(x)==root(y);\n    }\n    int comp_count() const{\n        return\
    \ count;\n    }\n    int size(int x) {\n        return siz[root(x)];\n    }\n\
    };"
  dependsOn: []
  isVerificationFile: false
  path: structure/UnionFind.hpp
  requiredBy: []
  timestamp: '2026-03-28 21:47:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verifier/UnionFind_verify.test.cpp
documentation_of: structure/UnionFind.hpp
layout: document
redirect_from:
- /library/structure/UnionFind.hpp
- /library/structure/UnionFind.hpp.html
title: structure/UnionFind.hpp
---
