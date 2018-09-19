combination combmod(combination a, ll b) {
    combination acc = {-1};
    for ( ; b;  b /= 2) {
        if (b % 2) {
            if (acc.cc == -1) {
                acc = a;
            } else {
                acc = combine(acc, a);
            }
        }
        a = combine(a, a);
    }
    return acc;
}