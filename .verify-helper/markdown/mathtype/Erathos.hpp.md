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
  bundledCode: "#line 2 \"mathtype/Erathos.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll\
    \ i=l;i<=r;i++)\nusing ll = long long;\nusing ld = long double;\n#define vl vector<ll>\n\
    \nvector<ll> Erasieve(ll n) {\n    vector<bool> is_prime(n+1, true);\n    is_prime[0]\
    \ = is_prime[1] = false; \n\n    for (int i=2;i*i<=n;++i) {\n        if (is_prime[i])\
    \ {\n            for (int j=i*i;j<=n;j+=i) is_prime[j] = false;\n        }\n \
    \   }\n    vector<ll> primes;\n    srep(i,2,n) {\n        if (is_prime[i]) primes.push_back(i);\n\
    \    }\n\n    return primes;\n}\n\nvector<ll> Erasieve_segment(ll lef, ll rig)\
    \ {\n    ll M = floor(sqrt(rig)+100);\n    vector<bool> isprime(M+1,true);\n \
    \   isprime[0]=isprime[1]=false;\n    for (ll p=2; p*p<=M; ++p) {\n        if\
    \ (!isprime[p]) continue;\n        for (ll q=p*p; q<=M; q+=p) isprime[q]=false;\n\
    \    }\n\n    vector<bool> isp2(rig-lef+1,true);\n    for (ll p=2; p<=M; ++p)\
    \ {\n        if (!isprime[p]) continue;\n        ll start=max(p*p,((lef+p-1)/p)*p);\n\
    \        for (ll q=start; q<=rig; q+=p)\n            isp2[q-lef] = false;\n  \
    \  }\n    vector<ll> res;\n\n    for (ll x=max(lef,2LL) ; x<=rig ; ++x)\n    \
    \    if (isp2[x-lef])\n            res.push_back(x);\n    return res;\n}\n\n\n\
    \nvector<vector<pair<ll,int>>> factor_range(ll L,ll R){ //lef\u4EE5\u4E0Arig\u4EE5\
    \u4E0B\u306E\u3082\u306E\u306E\u3001\u7D20\u56E0\u6570\u5206\u89E3\u306E\u7D50\
    \u679C\u3092(\u56E0\u6570\u3001\u6307\u6570)\u3067\u8FD4\u3059 O(max(r-l,sqrt(r)))\n\
    \    ll n=R-L+1;\n    vector<ll> v(n);\n    iota(v.begin(),v.end(),L);\n    vector<vector<pair<ll,int>>>\
    \ res(n);\n    for(ll p=2;p*p<=R;++p){\n        ll s=max(p*p,(L+p-1)/p*p);\n \
    \       for(ll j=s;j<=R;j+=p){\n            int i=j-L,c=0;\n            while(v[i]%p==0)\
    \ {\n                v[i]/=p;\n                ++c;\n            }\n         \
    \   if(c) res[i].emplace_back(p,c);\n        }\n    }\n    rep(i,n) if(v[i]>1)\
    \ res[i].emplace_back(v[i],1);\n    return res;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\nusing ll = long\
    \ long;\nusing ld = long double;\n#define vl vector<ll>\n\nvector<ll> Erasieve(ll\
    \ n) {\n    vector<bool> is_prime(n+1, true);\n    is_prime[0] = is_prime[1] =\
    \ false; \n\n    for (int i=2;i*i<=n;++i) {\n        if (is_prime[i]) {\n    \
    \        for (int j=i*i;j<=n;j+=i) is_prime[j] = false;\n        }\n    }\n  \
    \  vector<ll> primes;\n    srep(i,2,n) {\n        if (is_prime[i]) primes.push_back(i);\n\
    \    }\n\n    return primes;\n}\n\nvector<ll> Erasieve_segment(ll lef, ll rig)\
    \ {\n    ll M = floor(sqrt(rig)+100);\n    vector<bool> isprime(M+1,true);\n \
    \   isprime[0]=isprime[1]=false;\n    for (ll p=2; p*p<=M; ++p) {\n        if\
    \ (!isprime[p]) continue;\n        for (ll q=p*p; q<=M; q+=p) isprime[q]=false;\n\
    \    }\n\n    vector<bool> isp2(rig-lef+1,true);\n    for (ll p=2; p<=M; ++p)\
    \ {\n        if (!isprime[p]) continue;\n        ll start=max(p*p,((lef+p-1)/p)*p);\n\
    \        for (ll q=start; q<=rig; q+=p)\n            isp2[q-lef] = false;\n  \
    \  }\n    vector<ll> res;\n\n    for (ll x=max(lef,2LL) ; x<=rig ; ++x)\n    \
    \    if (isp2[x-lef])\n            res.push_back(x);\n    return res;\n}\n\n\n\
    \nvector<vector<pair<ll,int>>> factor_range(ll L,ll R){ //lef\u4EE5\u4E0Arig\u4EE5\
    \u4E0B\u306E\u3082\u306E\u306E\u3001\u7D20\u56E0\u6570\u5206\u89E3\u306E\u7D50\
    \u679C\u3092(\u56E0\u6570\u3001\u6307\u6570)\u3067\u8FD4\u3059 O(max(r-l,sqrt(r)))\n\
    \    ll n=R-L+1;\n    vector<ll> v(n);\n    iota(v.begin(),v.end(),L);\n    vector<vector<pair<ll,int>>>\
    \ res(n);\n    for(ll p=2;p*p<=R;++p){\n        ll s=max(p*p,(L+p-1)/p*p);\n \
    \       for(ll j=s;j<=R;j+=p){\n            int i=j-L,c=0;\n            while(v[i]%p==0)\
    \ {\n                v[i]/=p;\n                ++c;\n            }\n         \
    \   if(c) res[i].emplace_back(p,c);\n        }\n    }\n    rep(i,n) if(v[i]>1)\
    \ res[i].emplace_back(v[i],1);\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: mathtype/Erathos.hpp
  requiredBy: []
  timestamp: '2026-03-28 16:22:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: mathtype/Erathos.hpp
layout: document
redirect_from:
- /library/mathtype/Erathos.hpp
- /library/mathtype/Erathos.hpp.html
title: mathtype/Erathos.hpp
---
