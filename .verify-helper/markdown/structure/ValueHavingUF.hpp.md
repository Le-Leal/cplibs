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
  bundledCode: "#line 2 \"structure/ValueHavingUF.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\nusing ll = long long;\n\
    \ntemplate<class T>\nstruct ValueHavinguf {\n    vector<int> par;\n    vector<int>\
    \ siz;\n    vector<T> info;   // \u5404\u6210\u5206\u306E\u5024\n    vector<T>\
    \ node;   // \u5404\u30CE\u30FC\u30C9\u306E\u5024\n    function<T(const T&, const\
    \ T&)> op;\n    int count;\n\n    ValueHavinguf(ll n, function<T(const T&, const\
    \ T&)> op_, const T& def=T())\n        : par(n),siz(n,1),info(n),node(n, def),op(move(op_)),count(n)\
    \ {\n        rep(i,n) {\n            par[i]=i;\n            info[i]=def;\n   \
    \     }\n    }\n\n    ValueHavinguf(const vector<T>& initial, function<T(const\
    \ T&, const T&)> op_)\n        : par((ll)initial.size()), siz(initial.size(),\
    \ 1),\n          info(initial), node(initial),\n          op(move(op_)), count((int)initial.size())\
    \ {\n        rep(i,(ll)par.size()) par[i]=i;\n    }\n\n    int root(int x){\n\
    \        if(par[x]==x) return x;\n        else return par[x]=root(par[x]);\n \
    \   }\n\n    void unite(int x,int y){\n        int rx=root(x), ry=root(y);\n \
    \       if (rx==ry) return;\n        if (siz[rx]<siz[ry]) {\n            par[rx]=ry;\n\
    \            siz[ry]+=siz[rx];\n            siz[rx]=0;\n            info[ry]=op(info[rx],info[ry]);\n\
    \            info[rx]=T();\n        } else {\n            par[ry]=rx;\n      \
    \      siz[rx]+=siz[ry];\n            siz[ry]=0;\n            info[rx]=op(info[rx],info[ry]);\n\
    \            info[ry]=T();\n        }\n        --count;\n    }\n\n    bool same(int\
    \ x,int y) {\n        return root(x)==root(y);\n    }\n\n    int comp_count()\
    \ {\n        return count;\n    }\n\n    T& getinfo(int x) {\n        return info[root(x)];\n\
    \    }\n\n    T getnode(int x) { \n        return node[x]; \n    }\n\n    void\
    \ setnode(int x,const T& v) {\n        int r=root(x);\n        if(op(1,1)==2)\
    \ {\n            info[r]=info[r]-node[x]+v;\n        } \n        else {\n    \
    \        info[r]=(info[r]^node[x])^v;\n        }\n        node[x]=v;\n    }\n\n\
    \    int size(int x) {\n        return siz[root(x)];\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\nusing ll = long long;\n\ntemplate<class T>\nstruct ValueHavinguf\
    \ {\n    vector<int> par;\n    vector<int> siz;\n    vector<T> info;   // \u5404\
    \u6210\u5206\u306E\u5024\n    vector<T> node;   // \u5404\u30CE\u30FC\u30C9\u306E\
    \u5024\n    function<T(const T&, const T&)> op;\n    int count;\n\n    ValueHavinguf(ll\
    \ n, function<T(const T&, const T&)> op_, const T& def=T())\n        : par(n),siz(n,1),info(n),node(n,\
    \ def),op(move(op_)),count(n) {\n        rep(i,n) {\n            par[i]=i;\n \
    \           info[i]=def;\n        }\n    }\n\n    ValueHavinguf(const vector<T>&\
    \ initial, function<T(const T&, const T&)> op_)\n        : par((ll)initial.size()),\
    \ siz(initial.size(), 1),\n          info(initial), node(initial),\n         \
    \ op(move(op_)), count((int)initial.size()) {\n        rep(i,(ll)par.size()) par[i]=i;\n\
    \    }\n\n    int root(int x){\n        if(par[x]==x) return x;\n        else\
    \ return par[x]=root(par[x]);\n    }\n\n    void unite(int x,int y){\n       \
    \ int rx=root(x), ry=root(y);\n        if (rx==ry) return;\n        if (siz[rx]<siz[ry])\
    \ {\n            par[rx]=ry;\n            siz[ry]+=siz[rx];\n            siz[rx]=0;\n\
    \            info[ry]=op(info[rx],info[ry]);\n            info[rx]=T();\n    \
    \    } else {\n            par[ry]=rx;\n            siz[rx]+=siz[ry];\n      \
    \      siz[ry]=0;\n            info[rx]=op(info[rx],info[ry]);\n            info[ry]=T();\n\
    \        }\n        --count;\n    }\n\n    bool same(int x,int y) {\n        return\
    \ root(x)==root(y);\n    }\n\n    int comp_count() {\n        return count;\n\
    \    }\n\n    T& getinfo(int x) {\n        return info[root(x)];\n    }\n\n  \
    \  T getnode(int x) { \n        return node[x]; \n    }\n\n    void setnode(int\
    \ x,const T& v) {\n        int r=root(x);\n        if(op(1,1)==2) {\n        \
    \    info[r]=info[r]-node[x]+v;\n        } \n        else {\n            info[r]=(info[r]^node[x])^v;\n\
    \        }\n        node[x]=v;\n    }\n\n    int size(int x) {\n        return\
    \ siz[root(x)];\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: structure/ValueHavingUF.hpp
  requiredBy: []
  timestamp: '2026-02-28 23:36:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/ValueHavingUF.hpp
layout: document
redirect_from:
- /library/structure/ValueHavingUF.hpp
- /library/structure/ValueHavingUF.hpp.html
title: structure/ValueHavingUF.hpp
---
