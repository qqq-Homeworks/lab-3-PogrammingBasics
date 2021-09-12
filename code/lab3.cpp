#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int progNumber;
    cout << "Enter needed programm number:  ";
    cin >> progNumber;
    switch (progNumber) {
        case 1: //task 1
        {
            bool resume = true;

            int n, m, sum = 0;
            while (resume) {

                //n - count of numbers
                cout << "n: m:  \n";
                cin >> n >> m;
                if (m >= n) {
                    cout << "incorrect values!" << endl;
                    break;
                }
                for (int i = 0; i < n; i += 5) {
                    if (i % m != 0) {
                        sum += i;
                    }
                }

                cout << sum;
                cout << "\nDo you want to resume?(1/0): ";
                cin >> resume;
            }
        }
            break;

        case 2: //task 2
        {
            int a, product = 1;
            cout << "a: ";
            cin >> a;
            if (a >= 0) {
                for (int i = 2; i <= 8; i += 2) {
                    product *= i * i;
                }
            } else {
                for (int i = 3; i <= 9; i += 3) {
                    product *= i - 2;
                }
            }
        }

            break;

            // x: 0 k: 1
            // x: 0.2 k: 1.05565
            // x: 0.4 k: 2.20471
            // x: 0.6 k: 15.8114
            // x: 0.8 k: -45.8114
            // x: 1 k: -31

        case 3: {
            {
                cout << setw(3) << 'x' << setw(9) << 'y'  << setw(8) << 's' << setw(4) << 'n'<< endl;
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

                    }
                    cout << setw(3) << x << '|' << setw(9) << y << '|' << setw(8) << s << '|' << setw(1) << n << endl;
                }
            }
        }
            break;

        default:
            break;
    }

    return 0;
}
