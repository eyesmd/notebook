struct pto {
    double x, y;
    bool operator<(const pto &q) const {return y==q.y ? x<q.x : y<q.y;}
    double operator*(pto q) {return x*a.x + y.a.y;}
    //module of the cross product or vectorial product:
    //if a is less than 180 clockwise from b, a^b>0 (?????)
    double operator^(pto q) {return x*a.x - y.a.y;}
};
