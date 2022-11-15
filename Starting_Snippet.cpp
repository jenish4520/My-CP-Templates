#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#else 
#define debug(...) 45
#endif

#define IAGTBMS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MOD 1000000007
#define ll long long
#define vll vector<long long>
#define _no cout << "NO" << "\n"
#define _yes cout << "YES" << "\n"
#define all(x) (x).begin(), (x).end()
#define fl(i,a,b) for(long long i=a; i<b;i++)
#define rfl(i,a,b) for(long long i=a;i>=b;i--)

ll gcd(ll a, ll b){ll c;c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll fastPower(ll number, ll power){ll res=1,tmp=number;while(power>0){if((power&1)!=0){res*=tmp;}power=power>>1;tmp*=tmp;}return res;}
bool isPrime(ll n){if(n==1)return false;if(n==2||n==3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i+=6)if(n%i==0||(n%(i+2))==0)return false;return true;}

void solve() {
    $1
}

int main() 
{
    IAGTBMS;

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.in", "w", stdout);
        freopen("error.in", "w", stderr);
    #endif
    ll t=1;
    //cin>>t;
    while(t--){solve();}
}