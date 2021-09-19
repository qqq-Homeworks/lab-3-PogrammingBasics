#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(3) << 'x' << setw(9) << 'y' << setw(8) << 's' << setw(4) << 'n' << endl;
    double y, s, s1, eps = 0.000001;
    int n;
    for (double x = 0; x <= 1; x += 0.2)
    {
        y = cosh(x);
        double s = 1;
        double s1 = 1;
        int n = 1;
        while (abs(s1)>=eps)
        {
             s1 *= x * x;
            s1 /= 2 * n * (2 * n - 1);
            s += s1;
            n++;
        }
     
        cout << setw(3) << x << '|' << setw(9) << y << '|' << setw(8) << s << '|' << setw(1) << n << endl;
    }

    return 0;
}