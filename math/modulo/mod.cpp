
// Source Kth:
// https://github.com/kth-competitive-programming/kactl/blob/ebadd3c2872985b76346e4999b1833634500313f/content/number-theory/ModularArithmetic.h

template<ll M> // alternatively: 'const ll M = ...'
struct Mod {
    ll mod = M; ll x;
    Mod(ll xx) : x(xx) {}
    Mod operator+(Mod b) { return Mod((x + b.x) % mod); }
    Mod operator-(Mod b) { return Mod((x - b.x + mod) % mod); }
    Mod operator*(Mod b) { return Mod((x * b.x) % mod); }
    Mod operator/(Mod b) { return *this * b.invert(); }
    Mod invert() { return *this ^ (M-2); }
    Mod operator^(ll e) {
        if (!e) return Mod(1);
        Mod r = *this ^ (e / 2); r = r * r;
        return e&1 ? *this * r : r;
    }
    bool operator==(const Mod& o) const { return x == o.x; }
    bool operator<(const Mod& o) const { return x < o.x; }
};
