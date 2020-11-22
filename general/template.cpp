#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> ii;
 
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define fore(e,c) for (auto& e: c)
#define sz(v) (int)(v).size()
#define all(c) (c).begin(), (c).end()

#define deb(v) cerr << #v << ": " << (v) << endl;
#define debc(c) { cerr << #c << " " << sz(c) << endl; for(auto e : (c)) cerr << e << endl; }
#define debl() cerr << endl;
#define print_with(t, s) std::ostream& operator<<(std::ostream& os, const t &x) { return os << s; }
template <typename T, typename D>
std::ostream& operator<<(std::ostream& os, const std::pair<T, D> &p) {
    return os << "(" << p.first << ", " << p.second << ")";
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

