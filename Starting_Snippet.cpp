#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else 
#define debug(...) 45
#endif

#define ReBorn ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MOD 1000000007
#define ll long long
#define vll vector<long long>
#define _no cout << "NO" << "\n"
#define _yes cout << "YES" << "\n"

ll gcd(ll a, ll b){ll c;c=a%b;while(c!=0){a=b;b=c;c=a%b;}return b;}
ll fastPower(ll number, ll power){ll res=1,tmp=number;while(power>0){if((power&1)!=0){res*=tmp;}power=power>>1;tmp*=tmp;}return res;}
bool isPrime(ll n){if(n==1)return false;if(n==2||n==3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i+=6)if(n%i==0||(n%(i+2))==0)return false;return true;}

void solve() {
    // There You Go
    
    ll n;
    cin>>n;

    cout<<n;
}

int main() 
{
    ReBorn;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    
    ll t=1;
    //cin>>t;
    while(t--){solve();}
}
