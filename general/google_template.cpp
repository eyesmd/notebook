#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> ii;
 
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(v) (int)(v).size()
#define debug(v) cerr << #v << ": " << (v) << endl;
 
int expi(int b, int e) {
    if (!e) return 1;
    int q = expi(b, e/2);
    q = (q*q);
    return e % 2 ? (b*q) : q;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    forn(ti, t) {
    	string res = "------";
		cout << "Case #" << ti+1 << ": " << res << "\n";
    }
}
