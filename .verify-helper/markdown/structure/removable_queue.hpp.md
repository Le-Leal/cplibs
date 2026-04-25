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
  bundledCode: "#line 2 \"structure/removable_queue.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\n\ntemplate<class T, class comp=less<T>>\
    \ class removable_queue {\n    public:\n        ll count=0,sum=0;\n        void\
    \ push(const T &x) {\n            que.push(x);\n            count++;\n       \
    \     sum+=x;\n            balance();\n        }\n        void pop() {\n     \
    \       assert(!que.empty());\n            balance();\n            T v=que.top();\n\
    \            que.pop();\n            --count;\n            sum-=(ll)v;\n     \
    \       balance();\n        }\n        void erase(const T &x) {\n            del.push(x);\n\
    \            --count;\n            sum-=(ll)x;\n            balance();\n     \
    \   }\n        const T& top() {\n            assert(!que.empty());\n         \
    \   balance();\n            return que.top();\n        }\n        bool empty()\
    \ {\n            return count==0;\n        }\n        ll size() {\n          \
    \  return (ll)count;\n        }\n    private:\n        priority_queue<T,vector<T>,comp>\
    \ que,del;\n        void balance() {\n            while (!del.empty() && !que.empty()\
    \ && que.top()==del.top()) {\n                que.pop();\n                del.pop();\n\
    \            }\n        }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n\ntemplate<class T, class comp=less<T>> class removable_queue {\n\
    \    public:\n        ll count=0,sum=0;\n        void push(const T &x) {\n   \
    \         que.push(x);\n            count++;\n            sum+=x;\n          \
    \  balance();\n        }\n        void pop() {\n            assert(!que.empty());\n\
    \            balance();\n            T v=que.top();\n            que.pop();\n\
    \            --count;\n            sum-=(ll)v;\n            balance();\n     \
    \   }\n        void erase(const T &x) {\n            del.push(x);\n          \
    \  --count;\n            sum-=(ll)x;\n            balance();\n        }\n    \
    \    const T& top() {\n            assert(!que.empty());\n            balance();\n\
    \            return que.top();\n        }\n        bool empty() {\n          \
    \  return count==0;\n        }\n        ll size() {\n            return (ll)count;\n\
    \        }\n    private:\n        priority_queue<T,vector<T>,comp> que,del;\n\
    \        void balance() {\n            while (!del.empty() && !que.empty() &&\
    \ que.top()==del.top()) {\n                que.pop();\n                del.pop();\n\
    \            }\n        }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/removable_queue.hpp
  requiredBy: []
  timestamp: '2025-11-21 00:13:04+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: structure/removable_queue.hpp
layout: document
redirect_from:
- /library/structure/removable_queue.hpp
- /library/structure/removable_queue.hpp.html
title: structure/removable_queue.hpp
---
