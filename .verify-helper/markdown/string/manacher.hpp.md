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
  bundledCode: "#line 2 \"string/manacher.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define all(A) A.begin(),A.end()\n\
    using ll = long long;\n\nstring sp(string &s) { //manacher,\u4E38\u3054\u3068\u307B\
    \u3057\u3051\u308C\u3070rad\u3092\u3082\u3089\u3046\n    string t=\"*#\";\n  \
    \  rep(i,(ll)s.size()) {\n        t+=s[i];\n        t+=\"#\";\n    }\n    t+=\"\
    ~\";\n    ll n=t.size();\n    vector<ll> rad(n);\n    int i=0,j=0;\n    while(i<n)\
    \ {\n        while(i-j>=0 && i+j<n && t[i-j]==t[i+j]) ++j;\n        rad[i]=j;\n\
    \        int k=1;\n        while(i-k>=0 && k+rad[i-k]<j) rad[i+k]=rad[i-k],++k;\n\
    \        i+=k; j-=k;\n    }\n    rep(i,n) rad[i]--;\n    \n    int besti;\n  \
    \  rep(i,n) {\n        if(i+rad[i]==n-2) {\n            besti=i;break;\n     \
    \   }\n        if(i==n-1) return \"owari\";\n    }\n    string add;\n    ll truerad=(rad[besti]+1)/2;\n\
    \    ll truei=(besti-rad[besti]+1-2)/2;\n    add=s.substr(0,truei);\n    reverse(all(add));\n\
    \    return s+add;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define all(A) A.begin(),A.end()\nusing ll = long long;\n\
    \nstring sp(string &s) { //manacher,\u4E38\u3054\u3068\u307B\u3057\u3051\u308C\
    \u3070rad\u3092\u3082\u3089\u3046\n    string t=\"*#\";\n    rep(i,(ll)s.size())\
    \ {\n        t+=s[i];\n        t+=\"#\";\n    }\n    t+=\"~\";\n    ll n=t.size();\n\
    \    vector<ll> rad(n);\n    int i=0,j=0;\n    while(i<n) {\n        while(i-j>=0\
    \ && i+j<n && t[i-j]==t[i+j]) ++j;\n        rad[i]=j;\n        int k=1;\n    \
    \    while(i-k>=0 && k+rad[i-k]<j) rad[i+k]=rad[i-k],++k;\n        i+=k; j-=k;\n\
    \    }\n    rep(i,n) rad[i]--;\n    \n    int besti;\n    rep(i,n) {\n       \
    \ if(i+rad[i]==n-2) {\n            besti=i;break;\n        }\n        if(i==n-1)\
    \ return \"owari\";\n    }\n    string add;\n    ll truerad=(rad[besti]+1)/2;\n\
    \    ll truei=(besti-rad[besti]+1-2)/2;\n    add=s.substr(0,truei);\n    reverse(all(add));\n\
    \    return s+add;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: string/manacher.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:33:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/manacher.hpp
layout: document
redirect_from:
- /library/string/manacher.hpp
- /library/string/manacher.hpp.html
title: string/manacher.hpp
---
