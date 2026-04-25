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
  bundledCode: "#line 2 \"algorithm/lis.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\n\
    using ll = long long;\n\nvector<ll> lis_size(vector<ll>& a) { // \u6700\u9577\u5897\
    \u52A0\u90E8\u5206\u5217\u306E a index\u76EE\u307E\u3067\u307F\u305F\u306E\u304C\
    dp[a];\n    ll n=a.size();\n    vector<ll> dp(n,1);  \n    vector<ll> seq;   \
    \    \n\n   rep(i,n) {\n        auto it=lower_bound(seq.begin(), seq.end(), a[i]);\n\
    \        \n        if (it==seq.end())  seq.push_back(a[i]);\n        else *it=a[i];\n\
    \        dp[i]=distance(seq.begin(), lower_bound(seq.begin(), seq.end(), a[i]))+1;\n\
    \    }\n    srep(i,1,n-1) {\n        if(dp[i]<dp[i-1]) dp[i]=dp[i-1]; //\u3053\
    \u3053\u3092\u306A\u304F\u3059\u3068\u3001\"a[i]\u3092\u672B\u5C3E\u3068\u3059\
    \u308B\u3069\u3046\u3061\u3083\u3089\"\u306B\u306A\u308B\n    }\n    return dp;\n\
    }\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\nusing ll = long\
    \ long;\n\nvector<ll> lis_size(vector<ll>& a) { // \u6700\u9577\u5897\u52A0\u90E8\
    \u5206\u5217\u306E a index\u76EE\u307E\u3067\u307F\u305F\u306E\u304Cdp[a];\n \
    \   ll n=a.size();\n    vector<ll> dp(n,1);  \n    vector<ll> seq;       \n\n\
    \   rep(i,n) {\n        auto it=lower_bound(seq.begin(), seq.end(), a[i]);\n \
    \       \n        if (it==seq.end())  seq.push_back(a[i]);\n        else *it=a[i];\n\
    \        dp[i]=distance(seq.begin(), lower_bound(seq.begin(), seq.end(), a[i]))+1;\n\
    \    }\n    srep(i,1,n-1) {\n        if(dp[i]<dp[i-1]) dp[i]=dp[i-1]; //\u3053\
    \u3053\u3092\u306A\u304F\u3059\u3068\u3001\"a[i]\u3092\u672B\u5C3E\u3068\u3059\
    \u308B\u3069\u3046\u3061\u3083\u3089\"\u306B\u306A\u308B\n    }\n    return dp;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: algorithm/lis.hpp
  requiredBy: []
  timestamp: '2025-09-23 00:30:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: algorithm/lis.hpp
layout: document
redirect_from:
- /library/algorithm/lis.hpp
- /library/algorithm/lis.hpp.html
title: algorithm/lis.hpp
---
