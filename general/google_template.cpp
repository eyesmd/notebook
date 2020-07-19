#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> ii;
 
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(v) (int)(v).size()

#define deb(v) cerr << #v << ": " << (v) << endl;
#define debc(c) { cerr << #c << " " << sz(c) << endl; for(auto e : (c)) cerr << e << endl; }
#define debl() cerr << endl;
template <typename T, typename D>
std::ostream& operator<<(std::ostream& os, const std::pair<T, D> &p) {
    return os << "(" << p.first << ", " << p.second << ")";
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    forn(ti, t) {

		cout << "Case #" << ti+1 << ": " << "..." << "\n";
    }
}
