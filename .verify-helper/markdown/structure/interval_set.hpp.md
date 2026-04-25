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
  bundledCode: "#line 2 \"structure/interval_set.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\n\n\nclass intervalset {\n    ll max;\n\
    \    set<pair<ll,ll>> itv;\n    intervalset(ll n):max(n) {}\n    ll add(ll lef,ll\
    \ rig) { //\u5897\u3048\u305F\u6570\u3092\u8FD4\u3059\n        auto it=itv.lower_bound({lef,rig});\n\
    \        it--;\n        ll apply=0;\n        ll lost=0;\n        if(it->first<=lef\
    \ && lef<=it->second) {\n            if(lef>it->first) lef=it->first;\n      \
    \      if(rig<it->second) rig=it->second;\n            lost+=(it->second-it->first);\n\
    \            itv.erase(it);\n        }\n        it=itv.lower_bound({lef,rig});\n\
    \        while(1) {\n            if(it->first<=lef && it->first<=rig) {\n    \
    \            if(lef>it->first) lef=it->first;\n                if(rig<it->second)\
    \ rig=it->second;\n                lost+=(it->second-it->first);\n           \
    \     it=itv.erase(it);\n            }\n        }\n        apply+=(rig-lef);\n\
    \        return apply-lost;\n    }\n    set<pair<ll,ll>> all() {\n        return\
    \ itv;\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n\n\nclass intervalset {\n    ll max;\n    set<pair<ll,ll>> itv;\n\
    \    intervalset(ll n):max(n) {}\n    ll add(ll lef,ll rig) { //\u5897\u3048\u305F\
    \u6570\u3092\u8FD4\u3059\n        auto it=itv.lower_bound({lef,rig});\n      \
    \  it--;\n        ll apply=0;\n        ll lost=0;\n        if(it->first<=lef &&\
    \ lef<=it->second) {\n            if(lef>it->first) lef=it->first;\n         \
    \   if(rig<it->second) rig=it->second;\n            lost+=(it->second-it->first);\n\
    \            itv.erase(it);\n        }\n        it=itv.lower_bound({lef,rig});\n\
    \        while(1) {\n            if(it->first<=lef && it->first<=rig) {\n    \
    \            if(lef>it->first) lef=it->first;\n                if(rig<it->second)\
    \ rig=it->second;\n                lost+=(it->second-it->first);\n           \
    \     it=itv.erase(it);\n            }\n        }\n        apply+=(rig-lef);\n\
    \        return apply-lost;\n    }\n    set<pair<ll,ll>> all() {\n        return\
    \ itv;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: structure/interval_set.hpp
  requiredBy: []
  timestamp: '2026-01-31 21:06:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/interval_set.hpp
layout: document
redirect_from:
- /library/structure/interval_set.hpp
- /library/structure/interval_set.hpp.html
title: structure/interval_set.hpp
---
