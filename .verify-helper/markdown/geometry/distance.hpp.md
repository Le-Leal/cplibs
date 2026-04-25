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
  bundledCode: "#line 1 \"geometry/distance.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\nusing ll = long long;\nusing ld = long double;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define EPSIL 1e-12\n#define Winf 5e12\n\nld dist(ld x,ld\
    \ y,ld x1,ld y1){\n    ld p=(x1-x)*(x1-x)+(y1-y)*(y1-y);\n    return sqrtl(p);\n\
    }\n\nld line_point_dist(ld a,ld b,ld c,ld px,ld py){\n    ld f=a*a+b*b;\n    if(f<=EPSIL)\
    \ return Winf;\n    return fabsl(a*px+b*py+c)/sqrtl(f);\n}\n\nbool foot_from_point(ld\
    \ a,ld b,ld c,ld px,ld py,ld &fx,ld &fy){ //ax+by+c=0\u306B(px,py)\u304B\u3089\
    \u5782\u7DDA\u3092\u4E0B\u3057\u305F\u6642\u306E\u8DB3\u304C\u5165\u308B\n   \
    \ ld f=a*a+b*b;\n    if(f<=EPSIL) return false;\n    fx=px-a*(a*px+b*py+c)/f;\n\
    \    fy=py-b*(a*px+b*py+c)/f;\n    return true;\n}\n\nbool onseg(ld fx,ld fy,ld\
    \ x1,ld y1,ld x2,ld y2){ //\u7DDA\u5206(x1,y1)~(x2,y2)\u306B(fx,fy)\u306F\u4E57\
    \u308B\uFF1F\u4E09\u5206\u63A2\u7D22\u7248\u3082\u6B32\u3057\u3044\u306A\n   \
    \ ld dx=x2-x1;\n    ld dy=y2-y1;\n    ld d2=dx*dx+dy*dy;\n    if(d2<=EPSIL) return\
    \ false;\n    ld t=((fx-x1)*dx+(fy-y1)*dy)/d2;\n    return t>=-EPSIL && t<=1.0l+EPSIL;\n\
    };\n\nld point_seg_dist(ld x1,ld y1,ld x2,ld y2,ld px,ld py){ //\u7DDA\u5206(x1,y1)<->(x2,y2)\u3068\
    (px,py)\u306E\u6700\u77ED\u8DDD\u96E2\n    ld a=y2-y1,b=x1-x2,c=-(a*x1+b*y1);\n\
    \    if(fabsl(a)<=EPSIL && fabsl(b)<=EPSIL){\n        ld r=dist(px,py,x1,y1);\n\
    \        r=min(r,dist(px,py,x2,y2));\n        return r;\n    }\n    ld fx,fy;\n\
    \    if(foot_from_point(a,b,c,px,py,fx,fy) && onseg(fx,fy,x1,y1,x2,y2))\n    \
    \    return line_point_dist(a,b,c,px,py);\n    ld r=dist(px,py,x1,y1);\n    r=min(r,dist(px,py,x2,y2));\n\
    \    return r;\n}\n\nld point_seg_dist_ternarysearch(ld x1,ld y1,ld x2,ld y2,ld\
    \ px,ld py){\n    ld dx=x2-x1,dy=y2-y1;\n    ld segd2=dx*dx+dy*dy;\n    if(segd2<=EPSIL)\
    \ return dist(px,py,x1,y1);\n    ld l=0.0l,r=1.0l;\n    rep(iter,100){\n     \
    \   ld m1=l+(r-l)/3.0l;\n        ld m2=r-(r-l)/3.0l;\n        ld x1t=x1+dx*m1,y1t=y1+dy*m1;\n\
    \        ld x2t=x1+dx*m2,y2t=y1+dy*m2;\n        ld dd1=(x1t-px)*(x1t-px)+(y1t-py)*(y1t-py);\n\
    \        ld dd2=(x2t-px)*(x2t-px)+(y2t-py)*(y2t-py);\n        if(dd1<dd2) r=m2;\
    \ else l=m1;\n    }\n    ld t=(l+r)/2.0l;\n    ld fx=x1+dx*t,fy=y1+dy*t;\n   \
    \ return sqrtl((fx-px)*(fx-px)+(fy-py)*(fy-py));\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\nusing ll = long long;\nusing\
    \ ld = long double;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define EPSIL 1e-12\n\
    #define Winf 5e12\n\nld dist(ld x,ld y,ld x1,ld y1){\n    ld p=(x1-x)*(x1-x)+(y1-y)*(y1-y);\n\
    \    return sqrtl(p);\n}\n\nld line_point_dist(ld a,ld b,ld c,ld px,ld py){\n\
    \    ld f=a*a+b*b;\n    if(f<=EPSIL) return Winf;\n    return fabsl(a*px+b*py+c)/sqrtl(f);\n\
    }\n\nbool foot_from_point(ld a,ld b,ld c,ld px,ld py,ld &fx,ld &fy){ //ax+by+c=0\u306B\
    (px,py)\u304B\u3089\u5782\u7DDA\u3092\u4E0B\u3057\u305F\u6642\u306E\u8DB3\u304C\
    \u5165\u308B\n    ld f=a*a+b*b;\n    if(f<=EPSIL) return false;\n    fx=px-a*(a*px+b*py+c)/f;\n\
    \    fy=py-b*(a*px+b*py+c)/f;\n    return true;\n}\n\nbool onseg(ld fx,ld fy,ld\
    \ x1,ld y1,ld x2,ld y2){ //\u7DDA\u5206(x1,y1)~(x2,y2)\u306B(fx,fy)\u306F\u4E57\
    \u308B\uFF1F\u4E09\u5206\u63A2\u7D22\u7248\u3082\u6B32\u3057\u3044\u306A\n   \
    \ ld dx=x2-x1;\n    ld dy=y2-y1;\n    ld d2=dx*dx+dy*dy;\n    if(d2<=EPSIL) return\
    \ false;\n    ld t=((fx-x1)*dx+(fy-y1)*dy)/d2;\n    return t>=-EPSIL && t<=1.0l+EPSIL;\n\
    };\n\nld point_seg_dist(ld x1,ld y1,ld x2,ld y2,ld px,ld py){ //\u7DDA\u5206(x1,y1)<->(x2,y2)\u3068\
    (px,py)\u306E\u6700\u77ED\u8DDD\u96E2\n    ld a=y2-y1,b=x1-x2,c=-(a*x1+b*y1);\n\
    \    if(fabsl(a)<=EPSIL && fabsl(b)<=EPSIL){\n        ld r=dist(px,py,x1,y1);\n\
    \        r=min(r,dist(px,py,x2,y2));\n        return r;\n    }\n    ld fx,fy;\n\
    \    if(foot_from_point(a,b,c,px,py,fx,fy) && onseg(fx,fy,x1,y1,x2,y2))\n    \
    \    return line_point_dist(a,b,c,px,py);\n    ld r=dist(px,py,x1,y1);\n    r=min(r,dist(px,py,x2,y2));\n\
    \    return r;\n}\n\nld point_seg_dist_ternarysearch(ld x1,ld y1,ld x2,ld y2,ld\
    \ px,ld py){\n    ld dx=x2-x1,dy=y2-y1;\n    ld segd2=dx*dx+dy*dy;\n    if(segd2<=EPSIL)\
    \ return dist(px,py,x1,y1);\n    ld l=0.0l,r=1.0l;\n    rep(iter,100){\n     \
    \   ld m1=l+(r-l)/3.0l;\n        ld m2=r-(r-l)/3.0l;\n        ld x1t=x1+dx*m1,y1t=y1+dy*m1;\n\
    \        ld x2t=x1+dx*m2,y2t=y1+dy*m2;\n        ld dd1=(x1t-px)*(x1t-px)+(y1t-py)*(y1t-py);\n\
    \        ld dd2=(x2t-px)*(x2t-px)+(y2t-py)*(y2t-py);\n        if(dd1<dd2) r=m2;\
    \ else l=m1;\n    }\n    ld t=(l+r)/2.0l;\n    ld fx=x1+dx*t,fy=y1+dy*t;\n   \
    \ return sqrtl((fx-px)*(fx-px)+(fy-py)*(fy-py));\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: geometry/distance.hpp
  requiredBy: []
  timestamp: '2025-10-08 12:52:50+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: geometry/distance.hpp
layout: document
redirect_from:
- /library/geometry/distance.hpp
- /library/geometry/distance.hpp.html
title: geometry/distance.hpp
---
