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
  bundledCode: "#line 2 \"mathtype/Fast_prime.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\nusing ll = long long;\nusing ld = long double;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n\n\n\nbool millar_labin(ll n) {\n    if(n<=1) return false;\n\
    \    if(n==2) return true;\n    if(n%2==0) return false;\n    bool flag=1;\n \
    \   if(n<4759123141LL) flag=0;\n    vector<vector<ll>> tests={{2,7,61},{2,325,9375,28178,450775,9780504,1795265022}};\n\
    \    ll s=0,d=n-1;\n    while(d%2==0) {\n        ++s;\n        d>>=1;\n    }\n\
    \    for(auto a:tests[flag]) {\n        if(n<=a) return true;\n        __int128_t\
    \ x=1,a2=a%n,d2=d;\n        while (d2) {\n            if (d2&1) x=x*a2%n;\n  \
    \          a2=a2*a2%n;\n            d2>>=1;\n        }\n        if(x!=1) {\n \
    \           ll t;\n            rep(t,s) {\n                if (x==n-1) break;\n\
    \                x=x*x%n;\n            }\n            if(t==s) return false;\n\
    \        }\n    }\n    return true;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\nusing ld = long double;\n#define rep(i,n) for(ll i=0;i<n;i++)\n\n\
    \n\nbool millar_labin(ll n) {\n    if(n<=1) return false;\n    if(n==2) return\
    \ true;\n    if(n%2==0) return false;\n    bool flag=1;\n    if(n<4759123141LL)\
    \ flag=0;\n    vector<vector<ll>> tests={{2,7,61},{2,325,9375,28178,450775,9780504,1795265022}};\n\
    \    ll s=0,d=n-1;\n    while(d%2==0) {\n        ++s;\n        d>>=1;\n    }\n\
    \    for(auto a:tests[flag]) {\n        if(n<=a) return true;\n        __int128_t\
    \ x=1,a2=a%n,d2=d;\n        while (d2) {\n            if (d2&1) x=x*a2%n;\n  \
    \          a2=a2*a2%n;\n            d2>>=1;\n        }\n        if(x!=1) {\n \
    \           ll t;\n            rep(t,s) {\n                if (x==n-1) break;\n\
    \                x=x*x%n;\n            }\n            if(t==s) return false;\n\
    \        }\n    }\n    return true;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: mathtype/Fast_prime.hpp
  requiredBy: []
  timestamp: '2026-03-28 16:22:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: mathtype/Fast_prime.hpp
layout: document
redirect_from:
- /library/mathtype/Fast_prime.hpp
- /library/mathtype/Fast_prime.hpp.html
title: mathtype/Fast_prime.hpp
---
