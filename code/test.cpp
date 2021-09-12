#include <iostream>
#include <cmath>

using namespace std;

int mainq() {
    double y, s, s1, eps = 0.000001;
    int n;
    for (double x = 0; x <= 1; x += 0.2) {
        y = cos(2 * x - 1);
        s = 1.0 - pow(2 * x, 2) / 2;
        n = 1;
        s1 = pow(2 * x, 2) / 2;
        while (abs(s1) > eps) {
            n++;
            s1 = s1 * (-(4 * x * x / (2 * n * (2 * n - 1))));
            s += s1;
            cout << y << ' ' << s << ' ' << n << endl;
        }


    }


    return 0;
}