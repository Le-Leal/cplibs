---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: mathtype/FactSet.hpp
    title: mathtype/FactSet.hpp
  - icon: ':warning:'
    path: mathtype/chineseremainder.hpp
    title: mathtype/chineseremainder.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/home/leal/.local/share/pipx/venvs/online-judge-verify-helper/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/home/leal/.local/share/pipx/venvs/online-judge-verify-helper/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/home/leal/.local/share/pipx/venvs/online-judge-verify-helper/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ utility/helper.hpp: line 2: #pragma once found in a non-first line\n"
  code: "//\u6570\u5B66\u7CFB\u591A\u3081\u306E\u30D8\u30EB\u30D1\u30FC\n#pragma once\n\
    #include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\ntemplate\
    \ <class T> void vecpr(T first,T last) {\n    ll tmp=0;\n    for(auto it=first;it!=last;++it)\
    \ {\n        if(tmp) cout<<\" \";\n        cout<<*it;\n        tmp++;\n    }\n\
    \    cout<<endl;\n}\n\n\ntemplate<class T> T modpow(T fl, ll po, ll mode) {  //\
    \ mode: 0=mod\u306A\u3057, 1=mod\u3042\u308A\n    #ifndef MOD\n    #define MOD\
    \ 998244353\n    #endif\n    assert(po>=0);\n    T ret(1);\n    if (mode) {\n\
    \        fl%=T(MOD);\n        while (po>0) {\n            if (po&1) ret=(ret*fl)%T(MOD);\n\
    \            fl=(fl*fl)%T(MOD);\n            po>>=1;\n        }\n    } else {\n\
    \        while (po>0) {\n            if(po&1) ret*=fl;\n            fl*=fl;\n\
    \            po>>=1;\n        }\n    }\n    #undef MOD\n    return ret;\n}\n\n\
    ll modpow2(ll fl,ll po,ll modulo) { //ninni mod\n    ll ret=1;\n    fl%=modulo;\n\
    \    while (po>0) {\n        if (po&1) ret=(ret*fl)%modulo;\n        fl=(fl*fl)%modulo;\n\
    \        po>>=1;\n    }\n    return ret;\n}\n\nll modpowlarge(ll fl,string po,ll\
    \ modulo) { // po \u304C\u30AF\u30BD\u3067\u304B\u3044\u7528\n    if (modulo==1)\
    \ return 0;\n    fl%=modulo;\n    ll res=1%modulo;\n    for (char c:po) {\n  \
    \      ll d=c-'0';\n        res=modpow2(res,10,modulo);\n        if(d) res=(res*modpow2(fl,d,modulo))%modulo;\n\
    \    }\n    return res;\n}\n\nvector<ll> pfact(ll n) {\n    vector<ll> resp;\n\
    \    vector<bool> prefact(sqrtl(n)+10);\n    for(ll i=2;i*i<=n;i++) {\n      \
    \  while(n%i==0) {\n            n/=i;\n            if(!prefact[i]) resp.push_back(i);\n\
    \            prefact[i]=true;\n        }\n    }\n    if(n!=1) resp.push_back(n);\n\
    \    return resp;\n}\n\n\nll modinv(ll a, ll mod) { //\u62E1\u5F35Euclid\u306B\
    \u3088\u308Bmod\u3067\u306E\u9006\u5143, a*u+mod*v=1\u3092\u89E3\u304F\n\tll b=mod,u=1,v=0;\n\
    \twhile (b) {\n\t\tll t=a/b;\n\t\ta-=t*b;\n        swap(a,b);\n\t\tu-=t*v;\n \
    \       swap(u,v);\n\t}\n\tu%=mod; \n\tif (u<0) u+=mod;\n\treturn u;\n}\n\nll\
    \ extgcd(ll a, ll b, ll &x, ll &y) { // ax+by=gcd(a,b) -> x,y\u3092\u683C\u7D0D\
    \n    if (b==0) {\n        x=1;\n        y=0;\n        return a;\n    }\n    ll\
    \ d=extgcd(b,a%b,y,x);\n    y-=a/b*x;\n    return d;\n}\n\nll divcount(ll n) {\n\
    \    ll ans=0;\n    for(int i=1;i*i<=n;i++) {\n        if(n%i==0) ans+=(i*i==n\
    \ ? 1:2);\n    }\n    return ans;\n}"
  dependsOn: []
  isVerificationFile: false
  path: utility/helper.hpp
  requiredBy:
  - mathtype/FactSet.hpp
  - mathtype/chineseremainder.hpp
  timestamp: '2026-04-25 23:27:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: utility/helper.hpp
layout: document
redirect_from:
- /library/utility/helper.hpp
- /library/utility/helper.hpp.html
title: utility/helper.hpp
---
