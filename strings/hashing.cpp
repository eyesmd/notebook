
// CP Algorithms Version
// https://github.com/e-maxx-eng/e-maxx-eng/blob/48d3922a64c4b9268beb3acf30ee294f7bfefbce/src/string/string-hashing.md

// KTH Version
// https://github.com/kth-competitive-programming/kactl/blob/master/content/strings/Hashing.h

struct Hash {
    static const int MA = 1e9+7, MB = 1e9+9;
    Mod<MA> a; Mod<MB> b;
    Hash() : a(0), b(0) {}
    Hash(ll aa) : a(aa), b(aa) {}
    Hash(ll aa, ll bb) : a(aa), b(bb) {}
    Hash(Mod<MA> aa, Mod<MB> bb) : a(aa.x), b(bb.x) { }
    Hash operator+(Hash o) { return Hash( a + o.a, b + o.b ); }
    Hash operator-(Hash o) { return Hash( a - o.a, b - o.b ); }
    Hash operator*(Hash o) { return Hash( a * o.a, b * o.b ); }
    Hash operator^(ll e) { return Hash( a ^ e, b ^ e ); }
    bool operator<(const Hash& o) const { return a < o.a || (a == o.a && b < o.b); }
};
print_with( Hash, make_pair(x.a, x.b) );


Hash P = Hash(31, 53);

Hash PS[MAXM];
void init_ps() {
	PS[0] = Hash(1);
	forr(i, 1, MAXM) PS[i] = PS[i-1] * P;
}

Hash put(Hash h, string& s, int i) {
	return h + Hash(s[i] - 'a' + 1) * PS[i];
}

Hash put_back(Hash h, char c) {
	return Hash(c - 'a' + 1) + h * P;
}

Hash hsh(string& s) {
	h = Hash(0); forn(i, n) h = put(h, s, i); return h;
}
