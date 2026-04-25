---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: utility/helper.hpp
    title: utility/helper.hpp
  _extendedRequiredBy: []
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
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/home/leal/.local/share/pipx/venvs/online-judge-verify-helper/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ utility/helper.hpp: line 2: #pragma once found in a non-first line\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\n#define irep(i,r,l)\
    \ for(ll i=r;i>=l;i--)\nusing ll = long long;\nusing ld = long double;\n#define\
    \ MOD 998244353ll\n#define vl vector<ll>\n#include \"../utility/helper.hpp\"\n\
    \n\nclass factset {\n    public:\n        vl _fact;\n        vl _inv;\n      \
    \  ll __n;\n        factset(ll n):_fact(n+1),_inv(n+1),__n(n) {\n            _fact[0]=1;\n\
    \            srep(i,1,__n) {\n                _fact[i]=_fact[i-1]*i;\n       \
    \         _fact[i]%=MOD;\n            }\n            _inv[__n]=modpow(_fact[__n],MOD-2,1);\n\
    \            for(int i=__n-1;i>=0;i--) {\n                _inv[i]=_inv[i+1]*(i+1);\n\
    \                _inv[i]%=MOD;\n            }\n        }\n        ll fact(ll x)\
    \ {\n            assert(0<=x && x<=__n);\n            return _fact[x];\n     \
    \   }\n        ll inv(ll x) {\n            assert(0<=x && x<=__n);\n         \
    \   return _inv[x];\n        }\n\n        ll comb(ll nn,ll k) {\n            if(nn<k)\
    \ return 0;\n            ll ans=1;\n            ans*=_fact[nn];\n            ans%=MOD;\n\
    \            ans*=_inv[nn-k];\n            ans%=MOD;\n            ans*=_inv[k];\n\
    \            return ans%MOD;\n        }\n        \n};"
  dependsOn:
  - utility/helper.hpp
  isVerificationFile: false
  path: mathtype/FactSet.hpp
  requiredBy: []
  timestamp: '2026-04-25 23:27:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: mathtype/FactSet.hpp
layout: document
redirect_from:
- /library/mathtype/FactSet.hpp
- /library/mathtype/FactSet.hpp.html
title: mathtype/FactSet.hpp
---
