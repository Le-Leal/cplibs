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
  bundledCode: "#line 2 \"structure/slideminMax.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\nusing ll = long long;\n\
    \nvector<ll> slmax(vector<ll> a, ll limit, ll breadth) {//slidewindow\u306B\u3088\
    \u308B\u5E45breadth\u3067\u306E\u533A\u9593\u6700\u5927\u5024\u8A55\u4FA1,limit=a.size()\n\
    \    assert(limit==a.size());\n    deque<ll> deq;\n    vector<ll> max_numbers(limit,\
    \ (-1)*INF);\n    rep(i, limit) {\n        while (!deq.empty() && deq.front()\
    \ <= i - breadth) deq.pop_front();\n        while (!deq.empty() && a[deq.back()]\
    \ <= a[i]) deq.pop_back();\n        deq.push_back(i);\n        max_numbers[i]\
    \ = a[deq.front()];\n    }\n    return max_numbers;\n}\n\nvector<ll> slmin(vector<ll>\
    \ a, ll limit, ll breadth) {//slidewindow\u306B\u3088\u308B\u5E45breadth\u3067\
    \u306E\u533A\u9593\u6700\u5C0F\u5024\u8A55\u4FA1,limit=a.size()\n    assert(limit==a.size());\n\
    \    deque<ll> deq;\n    vector<ll> min_numbers(limit, INF);\n    rep(i, limit)\
    \ {\n        while (!deq.empty() && deq.front() <= i - breadth) deq.pop_front();\n\
    \        while (!deq.empty() && a[deq.back()] >= a[i]) deq.pop_back();\n     \
    \   deq.push_back(i);\n        min_numbers[i] = a[deq.front()];\n    }\n    return\
    \ min_numbers;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\nusing ll = long long;\n\nvector<ll> slmax(vector<ll> a,\
    \ ll limit, ll breadth) {//slidewindow\u306B\u3088\u308B\u5E45breadth\u3067\u306E\
    \u533A\u9593\u6700\u5927\u5024\u8A55\u4FA1,limit=a.size()\n    assert(limit==a.size());\n\
    \    deque<ll> deq;\n    vector<ll> max_numbers(limit, (-1)*INF);\n    rep(i,\
    \ limit) {\n        while (!deq.empty() && deq.front() <= i - breadth) deq.pop_front();\n\
    \        while (!deq.empty() && a[deq.back()] <= a[i]) deq.pop_back();\n     \
    \   deq.push_back(i);\n        max_numbers[i] = a[deq.front()];\n    }\n    return\
    \ max_numbers;\n}\n\nvector<ll> slmin(vector<ll> a, ll limit, ll breadth) {//slidewindow\u306B\
    \u3088\u308B\u5E45breadth\u3067\u306E\u533A\u9593\u6700\u5C0F\u5024\u8A55\u4FA1\
    ,limit=a.size()\n    assert(limit==a.size());\n    deque<ll> deq;\n    vector<ll>\
    \ min_numbers(limit, INF);\n    rep(i, limit) {\n        while (!deq.empty() &&\
    \ deq.front() <= i - breadth) deq.pop_front();\n        while (!deq.empty() &&\
    \ a[deq.back()] >= a[i]) deq.pop_back();\n        deq.push_back(i);\n        min_numbers[i]\
    \ = a[deq.front()];\n    }\n    return min_numbers;\n}"
  dependsOn: []
  isVerificationFile: false
  path: structure/slideminMax.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:38:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/slideminMax.hpp
layout: document
redirect_from:
- /library/structure/slideminMax.hpp
- /library/structure/slideminMax.hpp.html
title: structure/slideminMax.hpp
---
