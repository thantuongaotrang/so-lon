// contest: http://www.spoj.com/PTIT/problems/BCFRIEND/
// OLP Tin học SV 2009 - Khối không chuyên
// author : Nguyen Minh Tuan(ititorit)
// lang   : C/C++


#include <bits/stdc++.h>

#define _for(i,a,b) for(int i=(a),_b_=(b),_d_=(a<b?1:-1);i!=_b_;i+=_d_)
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define FORD(i,a,b) for(int i = a; i >= b; i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()

#define DEBUG(x) { cout << #x << " = " << x << endl; }
#define sqr(x) ((x)*(x))
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
    freopen("INPUT.inp", "r", stdin);
    #endif

    // solution starts...
    ll n, ans=0, b;
    map<ll,ll> myMap;
    cin >> n >> b;
    ll temp;
    FOR(i,1,n) {
    	cin >> temp;
    	ans += myMap[b-temp];
    	myMap[temp]++;
    }
    cout << ans << '\n';

    // solution ends...
    return 0;
}
