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
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n#include \"../utility/helper.hpp\"\n\nbool crt(ll a1,ll m1,ll a2,ll\
    \ m2,ll &r,ll &lcm) { //x=a1 mod m1 and x=a2 mod m2\u3092\u5408\u6210\u3057\u3066\
    x=r mod lcm\u306B\u306A\u308B\n    ll x,y;\n    ll g=extgcd(m1,m2,x,y);\n    if\
    \ ((a2-a1)%g!=0) return false; // No sols.\n\n    ll _MOD_=m1/g*m2;\n    ll tmp=((a2-a1)/g*x)%(m2/g);\n\
    \    r=(a1+m1*tmp)%_MOD_;\n    if (r<0) r+=_MOD_;\n    lcm=_MOD_;\n    return\
    \ true;\n}"
  dependsOn:
  - utility/helper.hpp
  isVerificationFile: false
  path: mathtype/chineseremainder.hpp
  requiredBy: []
  timestamp: '2026-04-25 23:27:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: mathtype/chineseremainder.hpp
layout: document
redirect_from:
- /library/mathtype/chineseremainder.hpp
- /library/mathtype/chineseremainder.hpp.html
title: mathtype/chineseremainder.hpp
---
