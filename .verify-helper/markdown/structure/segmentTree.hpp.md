---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verifier/segmentTree_verify.test.cpp
    title: verifier/segmentTree_verify.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  RAW: {{ page.data._verificationStatusIcon }}
  bundledCode: "#line 2 \"structure/segmentTree.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing ll = long long;\n\n\ntemplate<typename t> class segtree\
    \ {\n    function<t(t,t)> op;\n    function<t()> e;\n    ll n;\n    vector<t>\
    \ seg;\n    ll siz=1;\n    public:\n        segtree(ll n,function<t(t,t)> op,function<t()>\
    \ e) : n(n),op(op),e(e) {\n            while(siz<n) siz*=2;\n            seg =\
    \ vector<t>(2*siz,e());\n        }\n\n\n        segtree(const vector<t>& v, function<t(t,t)>\
    \ op, function<t()> e):segtree((ll)v.size(), op, e) {\n            for (ll i=0;i<(ll)v.size();++i)\
    \ seg[siz+i]=v[i];\n            for (ll i=siz-1;i>0;--i) seg[i]=op(seg[2*i],seg[2*i+1]);\n\
    \        }\n\n        void set(ll ind,t val) {\n            ind+=siz;\n      \
    \      seg[ind]=val;\n            while(ind>>=1) seg[ind]=op(seg[2*ind],seg[2*ind+1]);\n\
    \        }\n\n        void add(ll ind,t val) {\n            ind+=siz;\n      \
    \      seg[ind]=op(seg[ind],val);\n            while(ind>>=1) seg[ind]=op(seg[2*ind],seg[2*ind+1]);\n\
    \        }\n\n        t one_p(ll ind) {\n            return seg[ind+siz];\n  \
    \      }\n\n        t prod(ll lef,ll rig) { // [l,r)\n            lef+=siz,rig+=siz;\n\
    \            t opl=e(),opr=e();\n            for(;lef<rig;lef>>=1,rig>>=1) {\n\
    \                if(lef&1) opl=op(opl,seg[lef++]);\n                if(rig&1)\
    \ opr=op(seg[--rig],opr);\n            }\n            return op(opl,opr);\n  \
    \      }\n\n        template<class c> ll max_right(ll lef,c judge) {\n       \
    \     ll LEF=lef+siz,wid=1; //LEF=seg\u5217\u4E0A\u306E\u4F4D\u7F6E,lef=\u914D\
    \u5217\u4E0A\u306Eindex\n            t ansl=e();\n            for(;lef+wid<=n;LEF>>=1,wid<<=1)\
    \ if(LEF&1) {\n                if(!judge(op(ansl,seg[LEF]))) break;\n        \
    \        ansl=op(ansl,seg[LEF++]);\n                lef+=wid;\n            }\n\
    \            while(LEF<<=1,wid>>=1) {\n                //if(wid==0) break;\n \
    \               if(lef+wid<=n && judge(op(ansl,seg[LEF]))) {\n               \
    \     ansl=op(ansl,seg[LEF++]);\n                    lef+=wid;\n             \
    \   }\n            }\n            return lef;\n        }\n\n        template<class\
    \ c> ll min_left(ll rig,c judge) {\n            ll RIG=rig+siz,wid=1;\n      \
    \      t ansr=e();\n            for(;rig-wid>=0;RIG>>=1,wid<<=1) if(RIG&1) {\n\
    \                if(!judge(op(seg[RIG-1],ansr))) break;\n                ansr=op(seg[--RIG],ansr);\n\
    \                rig-=wid;\n            }\n            while(RIG<<=1,wid>>=1)\
    \ {\n                //if(wid==0) break;\n                if(rig-wid>=0 && judge(op(seg[RIG-1],ansr)))\
    \ {\n                    ansr=op(seg[--RIG],ansr);\n                    rig-=wid;\n\
    \                }\n            }\n            return rig;\n        }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n\n\ntemplate<typename t> class segtree {\n    function<t(t,t)> op;\n\
    \    function<t()> e;\n    ll n;\n    vector<t> seg;\n    ll siz=1;\n    public:\n\
    \        segtree(ll n,function<t(t,t)> op,function<t()> e) : n(n),op(op),e(e)\
    \ {\n            while(siz<n) siz*=2;\n            seg = vector<t>(2*siz,e());\n\
    \        }\n\n\n        segtree(const vector<t>& v, function<t(t,t)> op, function<t()>\
    \ e):segtree((ll)v.size(), op, e) {\n            for (ll i=0;i<(ll)v.size();++i)\
    \ seg[siz+i]=v[i];\n            for (ll i=siz-1;i>0;--i) seg[i]=op(seg[2*i],seg[2*i+1]);\n\
    \        }\n\n        void set(ll ind,t val) {\n            ind+=siz;\n      \
    \      seg[ind]=val;\n            while(ind>>=1) seg[ind]=op(seg[2*ind],seg[2*ind+1]);\n\
    \        }\n\n        void add(ll ind,t val) {\n            ind+=siz;\n      \
    \      seg[ind]=op(seg[ind],val);\n            while(ind>>=1) seg[ind]=op(seg[2*ind],seg[2*ind+1]);\n\
    \        }\n\n        t one_p(ll ind) {\n            return seg[ind+siz];\n  \
    \      }\n\n        t prod(ll lef,ll rig) { // [l,r)\n            lef+=siz,rig+=siz;\n\
    \            t opl=e(),opr=e();\n            for(;lef<rig;lef>>=1,rig>>=1) {\n\
    \                if(lef&1) opl=op(opl,seg[lef++]);\n                if(rig&1)\
    \ opr=op(seg[--rig],opr);\n            }\n            return op(opl,opr);\n  \
    \      }\n\n        template<class c> ll max_right(ll lef,c judge) {\n       \
    \     ll LEF=lef+siz,wid=1; //LEF=seg\u5217\u4E0A\u306E\u4F4D\u7F6E,lef=\u914D\
    \u5217\u4E0A\u306Eindex\n            t ansl=e();\n            for(;lef+wid<=n;LEF>>=1,wid<<=1)\
    \ if(LEF&1) {\n                if(!judge(op(ansl,seg[LEF]))) break;\n        \
    \        ansl=op(ansl,seg[LEF++]);\n                lef+=wid;\n            }\n\
    \            while(LEF<<=1,wid>>=1) {\n                //if(wid==0) break;\n \
    \               if(lef+wid<=n && judge(op(ansl,seg[LEF]))) {\n               \
    \     ansl=op(ansl,seg[LEF++]);\n                    lef+=wid;\n             \
    \   }\n            }\n            return lef;\n        }\n\n        template<class\
    \ c> ll min_left(ll rig,c judge) {\n            ll RIG=rig+siz,wid=1;\n      \
    \      t ansr=e();\n            for(;rig-wid>=0;RIG>>=1,wid<<=1) if(RIG&1) {\n\
    \                if(!judge(op(seg[RIG-1],ansr))) break;\n                ansr=op(seg[--RIG],ansr);\n\
    \                rig-=wid;\n            }\n            while(RIG<<=1,wid>>=1)\
    \ {\n                //if(wid==0) break;\n                if(rig-wid>=0 && judge(op(seg[RIG-1],ansr)))\
    \ {\n                    ansr=op(seg[--RIG],ansr);\n                    rig-=wid;\n\
    \                }\n            }\n            return rig;\n        }\n};"
  dependsOn: []
  isVerificationFile: false
  path: structure/segmentTree.hpp
  requiredBy: []
  timestamp: '2026-01-17 20:53:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verifier/segmentTree_verify.test.cpp
documentation_of: structure/segmentTree.hpp
layout: document
redirect_from:
- /library/structure/segmentTree.hpp
- /library/structure/segmentTree.hpp.html
title: structure/segmentTree.hpp
---

