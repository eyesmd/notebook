
// CP Algorithms Version
// https://github.com/e-maxx-eng/e-maxx-eng/blob/48d3922a64c4b9268beb3acf30ee294f7bfefbce/src/string/string-hashing.md

// KTH Version
// https://github.com/kth-competitive-programming/kactl/blob/master/content/strings/Hashing.h

struct Hash {
    static const int MA = 1e9+7, MB = 1e9+9;
    Mod<MA> a; Mod<MB> b;
    Hash() : a(0), b(0) {}
    Hash(Mod<MA> aa, Mod<MB> bb) : a(aa.x), b(bb.x) { }
    static Hash ch(char c) { return Hash(c - 'a' + 1, c - 'a' + 1); }
    Hash operator+(Hash o) { return Hash( a + o.a, b + o.b ); }
    Hash operator-(Hash o) { return Hash( a - o.a, b - o.b ); }
    Hash operator*(Hash o) { return Hash( a * o.a, b * o.b ); }
    Hash operator^(ll e) { return Hash( a ^ e, b ^ e ); }
    Hash invert() { return Hash( a.invert(), b.invert() ); } // expensive!
    bool operator==(const Hash& o) const { return a == o.a && b == o.b; }
    bool operator<(const Hash& o) const { return a < o.a || (a == o.a && b < o.b); }
};

print_with( Hash, make_pair(x.a, x.b) );

const int MAXM = ...; // completar y llamar a 'init_ps()'
Hash P[MAXM];
void init_ps() {
    P[0] = Hash(1, 1);
    forr(i, 1, MAXM) P[i] = P[i-1] * Hash(31, 53);
}

Hash hsh(string& s) {
    Hash h = Hash(0, 0);
    forn(i, sz(s)) h = h + Hash::ch(s[i]) * P[i];
    return h;
}

// push_last:  h + Hash::ch(c) * P[sz(s)-1];
// push_first: Hash::ch(c) + (h * P[1]);
