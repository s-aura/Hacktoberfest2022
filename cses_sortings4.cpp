#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
#define ll long long 
#define MAX_SIZE 1000005
#define sp " "
#define M 1000000000000000007
#define el endl
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rop(i,a,n) for(int i=a;i<=n;i++)
#define vll vector<ll>
#define I insert
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) v.begin(),v.end()
#define PI 3.1415926535
#define fi first
#define se second
#define pp pair<int,int>
#define setx(n) fixed<<setprecision(n)
#define MAX (int)2e5+10
#include <string.h>
using namespace std;
 
/*..........................................................................*/
void time_limit_exceeded()
{
    ll n,m; cin>>n>>m;
    vll v(n),ar(m);
    rep(i,0,n) cin>>v[i];
    rep(i,0,m) cin>>ar[i];
    set<pair<ll,ll>> s;
    rep(i,0,n)
    {
        s.insert({v[i],i});
    }
    rep(i,0,m)
    {
        auto it=s.lower_bound({ar[i]+1,0});
        if(it==s.begin())
        {
            cout<<-1<<el;
        }
        else
        {
            ll val=(*--it).first;
            cout<<val<<el;
            s.erase(it);
        }
    }
}
/*..........................................................................*/
/*
--> Run sample testcases with diff. nums
 
*/
int main()
{
  ll t=1;
  // cin>>t;
  while(t--)
  {
    time_limit_exceeded();
  }
  return 0;
}
