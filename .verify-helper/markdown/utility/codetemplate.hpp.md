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
  bundledCode: "#line 2 \"utility/codetemplate.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll\
    \ i=l;i<=r;i++)\n#define irep(i,r,l) for(ll i=r;i>=l;i--)\nusing ll = long long;\n\
    using ld = long double;\n#define MOD 998244353ll\n#define vout(v) for(auto i :v)\
    \ cout<<i<<\" \";\n#define INF 9223300000000000000ll\n#define Winf 5e12\n#define\
    \ nl \"\\n\"\n#define all(a) a.begin(),a.end()\n#define rall(a) a.rbegin(),a.rend()\n\
    #define vl vector<ll>\n#define pb push_back\n#define vc vector<char>\n#define\
    \ vb vector<bool>\n#define uniq(x) sort((x).begin(),(x).end());(x).erase(unique((x).begin(),(x).end()),(x).end())\n\
    #define eb emplace_back\n\n\n\nvoid yes(void) {cout << \"Yes\" << nl;}\nvoid no(void)\
    \ { cout<<\"No\"<<nl;}\nvoid yn(bool a) {\n    cout<<(a ? \"Yes\":\"No\")<<nl;\n\
    }\n\n\nvector<ll> dx={-1,0,1,0,1,1,-1,-1};\nvector<ll> dy={0,-1,0,1,-1,1,-1,1};\n\
    \nbool isin(ll i,ll j,ll h,ll w) {\n    if(i<0 || i>=h || j<0 || j>=w) return\
    \ false;\n    return true;\n}\n\ntemplate<typename T> bool chmin(T& a, T b){if(a\
    \ > b){a = b; return true;} return false;}\ntemplate<typename T> bool chmax(T&\
    \ a, T b){if(a < b){a = b; return true;} return false;}\n\n\ntemplate<class T>T\
    \ vecmax(const vector<T>&v){return *max_element(all(v));}\ntemplate<class T>T\
    \ vecmin(const vector<T>&v){return *min_element(all(v));}\n\nll safemod(ll num,ll\
    \ rule) {\n    return (num%rule+rule)%rule;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\n#define irep(i,r,l)\
    \ for(ll i=r;i>=l;i--)\nusing ll = long long;\nusing ld = long double;\n#define\
    \ MOD 998244353ll\n#define vout(v) for(auto i :v) cout<<i<<\" \";\n#define INF\
    \ 9223300000000000000ll\n#define Winf 5e12\n#define nl \"\\n\"\n#define all(a)\
    \ a.begin(),a.end()\n#define rall(a) a.rbegin(),a.rend()\n#define vl vector<ll>\n\
    #define pb push_back\n#define vc vector<char>\n#define vb vector<bool>\n#define\
    \ uniq(x) sort((x).begin(),(x).end());(x).erase(unique((x).begin(),(x).end()),(x).end())\n\
    #define eb emplace_back\n\n\n\nvoid yes(void) {cout << \"Yes\" << nl;}\nvoid no(void)\
    \ { cout<<\"No\"<<nl;}\nvoid yn(bool a) {\n    cout<<(a ? \"Yes\":\"No\")<<nl;\n\
    }\n\n\nvector<ll> dx={-1,0,1,0,1,1,-1,-1};\nvector<ll> dy={0,-1,0,1,-1,1,-1,1};\n\
    \nbool isin(ll i,ll j,ll h,ll w) {\n    if(i<0 || i>=h || j<0 || j>=w) return\
    \ false;\n    return true;\n}\n\ntemplate<typename T> bool chmin(T& a, T b){if(a\
    \ > b){a = b; return true;} return false;}\ntemplate<typename T> bool chmax(T&\
    \ a, T b){if(a < b){a = b; return true;} return false;}\n\n\ntemplate<class T>T\
    \ vecmax(const vector<T>&v){return *max_element(all(v));}\ntemplate<class T>T\
    \ vecmin(const vector<T>&v){return *min_element(all(v));}\n\nll safemod(ll num,ll\
    \ rule) {\n    return (num%rule+rule)%rule;\n}"
  dependsOn: []
  isVerificationFile: false
  path: utility/codetemplate.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:41:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: utility/codetemplate.hpp
layout: document
redirect_from:
- /library/utility/codetemplate.hpp
- /library/utility/codetemplate.hpp.html
title: utility/codetemplate.hpp
---
