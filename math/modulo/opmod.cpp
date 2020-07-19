ll opmod(ll a, ll b) { // // O(log b) [change OP and ID]
    ll acc = ID;
    for ( ; b; b /= 2) {
        if (b % 2) acc = (acc == ID ? a : OP(acc, a)) % MOD;
        a = OP(a, a) % MOD;
    }
    return acc;
}