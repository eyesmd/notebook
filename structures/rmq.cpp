struct SparseTable {
    vector<vector<int>> t;
    SparseTable(vector<int>& src) { // O(n log n)
        int n = sz(src);
        t.assign(1 + 31 - __builtin_clz(n), vector<int>(n));
        forn(i, n) t[0][i] = src[i];
        forn(i, sz(t)-1) forn(j, n-(1<<i)) {
            t[i+1][j] = binary_op(t[i][j], t[i][j+(1<<i)]);
        }
    }
    int query(int l, int r) { // O(1) - interval [l, r)  
        int niv = 31 - __builtin_clz(r-l);
        return binary_op(t[niv][l], t[niv][r-(1<<niv)]);
    }
    int binary_op(int a, int b) {
        return min(a, b);
    }
};
