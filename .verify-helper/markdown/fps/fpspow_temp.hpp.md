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
  bundledCode: "#line 2 \"fps/fpspow_temp.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\n\ntemplate<class T> vector<T> modpow_fps(vector<T>\
    \ a,ll po,ll shrink) {\n    assert(po>=0 && shrink>=0);\n    vector<T> ret={1};\n\
    \    auto trim=[&](const vector<T>& v)->vector<T> {\n        if (v.size()<=shrink+1)\
    \ return v;\n        return vector<T>(v.begin(),v.begin()+shrink+1);\n    };\n\
    \    a=trim(a);\n    while(po>0) {\n        if(po&1) ret=atcoder::convolution(ret,a);\n\
    \        a=atcoder::convolution(a,a);\n        ret=trim(ret);\n        a=trim(a);\n\
    \        po>>=1;\n    }\n    return ret;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n\ntemplate<class T> vector<T> modpow_fps(vector<T> a,ll po,ll shrink)\
    \ {\n    assert(po>=0 && shrink>=0);\n    vector<T> ret={1};\n    auto trim=[&](const\
    \ vector<T>& v)->vector<T> {\n        if (v.size()<=shrink+1) return v;\n    \
    \    return vector<T>(v.begin(),v.begin()+shrink+1);\n    };\n    a=trim(a);\n\
    \    while(po>0) {\n        if(po&1) ret=atcoder::convolution(ret,a);\n      \
    \  a=atcoder::convolution(a,a);\n        ret=trim(ret);\n        a=trim(a);\n\
    \        po>>=1;\n    }\n    return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: fps/fpspow_temp.hpp
  requiredBy: []
  timestamp: '2025-11-03 16:17:02+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: fps/fpspow_temp.hpp
layout: document
redirect_from:
- /library/fps/fpspow_temp.hpp
- /library/fps/fpspow_temp.hpp.html
title: fps/fpspow_temp.hpp
---
