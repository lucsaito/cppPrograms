//
// Created by Lucas on 04/11/20.
//
#include <cmath>

double cross_product (double x1, double y1, double x2, double y2) {
    double cross_p = x1*y2 - x2*y1;
    return cross_p;
}

double count_area (const size_t n, const double * const x, const double * const y) {
    double sum = 0;
    for (size_t i = 0; i < n; i++) {
        sum += cross_product(x[i], y[i], x[(i+1) % n] - x[i], y[(i+1) % n] - y[i]);
    }
    sum = abs(sum)/2.;
    return sum;
}
double count_perimeter (const size_t n, const double * const x, const double * const y) {
    double sum = 0;
    for (size_t i = 0; i < n; i++) {
        sum += sqrt(
                pow((x[(i+1) % n] - x[i]), 2) + pow((y[(i+1) % n] - y[i]), 2)
        );
    }
    return sum;
}
