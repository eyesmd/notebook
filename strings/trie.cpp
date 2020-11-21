struct trie {
    map<char, trie*> m; trie* parent = 0;
    bool is_leaf = false;

    trie(trie* p = 0) : parent(p) {}
    trie* go(const char* s) { return *s ? m.at(*s)->go(s+1) : this; }
    void add(const char* s) { // use with std::string:c_str()
        if (char c = *s) {
            if (!m[c]) m[c] = new trie(this);
            m[c]->add(s+1);
        } else {
            is_leaf = true;
        }
    }
};