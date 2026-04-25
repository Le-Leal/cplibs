#pragma once
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include "../utility/helper.hpp"

bool crt(ll a1,ll m1,ll a2,ll m2,ll &r,ll &lcm) { //x=a1 mod m1 and x=a2 mod m2を合成してx=r mod lcmになる
    ll x,y;
    ll g=extgcd(m1,m2,x,y);
    if ((a2-a1)%g!=0) return false; // No sols.

    ll _MOD_=m1/g*m2;
    ll tmp=((a2-a1)/g*x)%(m2/g);
    r=(a1+m1*tmp)%_MOD_;
    if (r<0) r+=_MOD_;
    lcm=_MOD_;
    return true;
}