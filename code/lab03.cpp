#include <iostream>
#include <cmath>

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

            }
    }
    break;

    default:
        break;
}

return 0;
}
