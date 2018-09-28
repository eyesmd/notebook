combination combmod(combination a, ll times) {
    combination acc = {-1};
    for ( ; times;  times /= 2) {
        if (times % 2) {
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