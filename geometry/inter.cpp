// Given lines in parametric form 'c + tv' and 'd + tw' this
// function yields the values t1, t2 such that 'c + t1v = d + t2w'
pair<double, double> scalar_intersection(pto c, pto v, pto d, pto w) {
    double ndet = v.x * w.y - v.y * w.x;
    if (abs(ndet) < EPS) {
        return {DBL_MAX, DBL_MAX};
    } else {
        return {(w.y * (d.x - c.x) - w.x * (d.y - c.y))/ndet,
                (v.y * (d.x - c.x) - v.x * (d.y - c.y))/ndet};
    }
}

pto seg_intersection(pto c, pto v, pto d, pto w) {
    auto p = scalar_intersection(c, v, d, w);
    if (p.first == DBL_MAX) return {DBL_MAX, DBL_MAX};
    if (p.first < -EPS || p.first > 1 + EPS) return {DBL_MAX, DBL_MAX};
    if (p.second < -EPS || p.second > 1 + EPS) return {DBL_MAX, DBL_MAX};
    return c + v * p.first;
}
