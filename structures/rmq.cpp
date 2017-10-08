struct Rmq {
    vector< vector<int> > st;
    Rmq(vector<int>& src) {
        st = vector< vector<int> >(floor(log2(sz(src))+1), vector<int>(sz(src)));
        forn(i, sz(src)) st[0][i] = src[i];
        forn(i, sz(st)-1) forn(j, sz(src)-(1<<i)) {
            st[i+1][j] = min(st[i][j], st[i][j+(1<<i)]);
        }
    }
    int query(int i, int j) {
        int niv = floor(log2(j-i));
        return min(st[niv][i], st[niv][j-(1<<niv)]);
    }
};
