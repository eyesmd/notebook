ll expmod(ll a, ll b) { // O(log b)
    ll acc = 1; // identity element, can be simulated with an if
    for ( ; b; b /= 2) {
        if (b % 2) acc = (acc * a) % MOD;
        a = (a * a) % MOD;
    }
    return acc;
}