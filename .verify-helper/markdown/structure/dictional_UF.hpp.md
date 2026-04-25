---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"structure/dictional_UF.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\n\nstruct dictional_uf {\n    public:\n\
    \        unordered_map<ll,ll> par;\n        unordered_map<ll,ll> rank;\n     \
    \   dictional_uf():par(),rank(){}\n        void add(ll key) {\n            par[key]=key;\n\
    \            rank[key]=1;\n        }\n        ll find(ll x) {\n            if(x==par[x])\
    \ return x;\n            else return par[x]=find(par[x]);\n        }\n       \
    \ bool unite(ll x,ll y) {\n            ll px=find(x),py=find(y);\n           \
    \ if(px==py) return false;\n            if(px<py) {\n                par[px]=py;\n\
    \                rank[py]+=rank[px];\n                rank[px]=0;\n          \
    \  }\n            else {\n                par[py]=px;\n                rank[px]=rank[py];\n\
    \                rank[py]=0;\n            }\n            return true;\n      \
    \  }\n        \n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n\nstruct dictional_uf {\n    public:\n        unordered_map<ll,ll>\
    \ par;\n        unordered_map<ll,ll> rank;\n        dictional_uf():par(),rank(){}\n\
    \        void add(ll key) {\n            par[key]=key;\n            rank[key]=1;\n\
    \        }\n        ll find(ll x) {\n            if(x==par[x]) return x;\n   \
    \         else return par[x]=find(par[x]);\n        }\n        bool unite(ll x,ll\
    \ y) {\n            ll px=find(x),py=find(y);\n            if(px==py) return false;\n\
    \            if(px<py) {\n                par[px]=py;\n                rank[py]+=rank[px];\n\
    \                rank[px]=0;\n            }\n            else {\n            \
    \    par[py]=px;\n                rank[px]=rank[py];\n                rank[py]=0;\n\
    \            }\n            return true;\n        }\n        \n};\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/dictional_UF.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:34:24+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/dictional_UF.hpp
layout: document
redirect_from:
- /library/structure/dictional_UF.hpp
- /library/structure/dictional_UF.hpp.html
title: structure/dictional_UF.hpp
---
