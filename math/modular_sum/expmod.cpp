ll expmod(ll a, ll b) {
    ll acc = 1;
    for ( ; b; b /= 2) {
        if (b % 2) acc = (acc * a) % MOD;
        a = (a * a) % MOD;
    }
    return acc;
}