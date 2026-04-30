#pragma once
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//mainにおいてモノイドの定義がいるよ！
template<class M> class segtree {
    using T= typename M::T;
    ll n;
    vector<T> seg;
    ll siz=1;
    public:
        segtree(ll n) : n(n) {
            while(siz<n) siz*=2;
            seg = vector<T>(2*siz,M::e());
        }


        segtree(const vector<T>& v) :n(v.size()) {
            while(siz<n) siz*=2;
            seg = vector<T>(2*siz,M::e());
            for (ll i=0;i<(ll)v.size();++i) seg[siz+i]=v[i];
            for (ll i=siz-1;i>0;--i) seg[i]=M::op(seg[2*i],seg[2*i+1]);
        }

        void set(ll ind,T val) {
            ind+=siz;
            seg[ind]=val;
            while(ind>>=1) seg[ind]=M::op(seg[2*ind],seg[2*ind+1]);
        }

        void add(ll ind,T val) {
            ind+=siz;
            seg[ind]=M::op(seg[ind],val);
            while(ind>>=1) seg[ind]=M::op(seg[2*ind],seg[2*ind+1]);
        }

        T one_p(ll ind) {
            return seg[ind+siz];
        }

        T prod(ll lef,ll rig) { // [l,r)
            lef+=siz,rig+=siz;
            T opl=M::e(),opr=M::e();
            for(;lef<rig;lef>>=1,rig>>=1) {
                if(lef&1) opl=M::op(opl,seg[lef++]);
                if(rig&1) opr=M::op(seg[--rig],opr);
            }
            return M::op(opl,opr);
        }

        template<class C> ll max_right(ll lef,C judge) {
            ll LEF=lef+siz,wid=1; //LEF=seg列上の位置,lef=配列上のindex
            T ansl=M::e();
            for(;lef+wid<=n;LEF>>=1,wid<<=1) if(LEF&1) {
                if(!judge(M::op(ansl,seg[LEF]))) break;
                ansl=M::op(ansl,seg[LEF++]);
                lef+=wid;
            }
            while(LEF<<=1,wid>>=1) {
                //if(wid==0) break;
                if(lef+wid<=n && judge(M::op(ansl,seg[LEF]))) {
                    ansl=M::op(ansl,seg[LEF++]);
                    lef+=wid;
                }
            }
            return lef;
        }

        template<class C> ll min_left(ll rig,C judge) {
            ll RIG=rig+siz,wid=1;
            T ansr=M::e();
            for(;rig-wid>=0;RIG>>=1,wid<<=1) if(RIG&1) {
                if(!judge(M::op(seg[RIG-1],ansr))) break;
                ansr=M::op(seg[--RIG],ansr);
                rig-=wid;
            }
            while(RIG<<=1,wid>>=1) {
                //if(wid==0) break;
                if(rig-wid>=0 && judge(M::op(seg[RIG-1],ansr))) {
                    ansr=M::op(seg[--RIG],ansr);
                    rig-=wid;
                }
            }
            return rig;
        }
};
