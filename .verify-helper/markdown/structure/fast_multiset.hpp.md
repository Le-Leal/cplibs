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
  bundledCode: "#line 2 \"structure/fast_multiset.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\n#define rep(i,n) for(ll i=0;i<n;i++)\n\
    \ntemplate<class T> class fastms {\n    public:\n        set<T> st;\n        unordered_map<T,ll>\
    \ cnt;\n        void insert(T x) {\n            if(!cnt.count(x)) st.insert(x);\n\
    \            else if(cnt[x]==0) st.insert(x);\n            cnt[x]++;\n       \
    \ }\n        void erase(T x) {\n            assert(cnt[x]>=1);\n            if(cnt[x]==1)\
    \ st.erase(x);\n            cnt[x]--;\n        }\n        ll count(T x) {\n  \
    \          if(!cnt.count(x)) return 0ll;\n            else return cnt[x];\n  \
    \      }\n        ll lower_bound(ll x) {\n            return distance(st.begin(),st.lower_bound(x));\n\
    \        }\n        ll upper_bound(ll x) {\n            return distance(st.begin(),st.upper_bound(x));\n\
    \        }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n#define rep(i,n) for(ll i=0;i<n;i++)\n\ntemplate<class T> class\
    \ fastms {\n    public:\n        set<T> st;\n        unordered_map<T,ll> cnt;\n\
    \        void insert(T x) {\n            if(!cnt.count(x)) st.insert(x);\n   \
    \         else if(cnt[x]==0) st.insert(x);\n            cnt[x]++;\n        }\n\
    \        void erase(T x) {\n            assert(cnt[x]>=1);\n            if(cnt[x]==1)\
    \ st.erase(x);\n            cnt[x]--;\n        }\n        ll count(T x) {\n  \
    \          if(!cnt.count(x)) return 0ll;\n            else return cnt[x];\n  \
    \      }\n        ll lower_bound(ll x) {\n            return distance(st.begin(),st.lower_bound(x));\n\
    \        }\n        ll upper_bound(ll x) {\n            return distance(st.begin(),st.upper_bound(x));\n\
    \        }\n};"
  dependsOn: []
  isVerificationFile: false
  path: structure/fast_multiset.hpp
  requiredBy: []
  timestamp: '2025-11-21 00:20:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/fast_multiset.hpp
layout: document
redirect_from:
- /library/structure/fast_multiset.hpp
- /library/structure/fast_multiset.hpp.html
title: structure/fast_multiset.hpp
---
