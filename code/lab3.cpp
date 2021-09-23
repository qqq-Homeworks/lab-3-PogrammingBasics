#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int progNumber;
    cout << "Enter needed programm number:  ";
    cin >> progNumber;
    switch (progNumber)
    {
    case 1: //task 1
    {
        bool resume = true;

        int n, m, sum = 0;
        while (resume)
        {
            sum = 0;

            //n - count of numbers
            cout << "n: m:  \n";
            cin >> n >> m;
            if (m >= n)
            {
                cout << "incorrect values!" << endl;
                break;
            }
            for (int i = 0; i < n; i += 5)
            {
                if (i % m != 0)
                {
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
        double a, product = 1.0;
        cout << "a: ";
        cin >> a;
        if (a >= 0)
        {
            for (int i = 2; i <= 8; i += 2)
            {
                product *= i * i;
            }
            product -= a;
        }
        else
        {
            for (int i = 3; i <= 9; i += 3)
            {
                product *= i - 2;
            }
        }
        cout << fixed << setprecision(3) << product;
    }

    break;

        // x: 0 k: 1
        // x: 0.2 k: 1.05565
        // x: 0.4 k: 2.20471
        // x: 0.6 k: 15.8114
        // x: 0.8 k: -45.8114
        // x: 1 k: -31

    case 3:
    {
        {
            cout << setw(2) << 'x' << setw(9) << 'y' << setw(11) << 's' << setw(7) << 'n' << endl;
            double y, s, s1, eps = 0.000001;
            int n;
            for (double x = 0; x <= 1; x += 0.2)
            {
                y = cos(x * 2);
                s = 1.0 - x * x * 4 / 2;
                n = 1;
                s1 = -(x * x * 4 / 2);
                while (abs(s1) > eps)
                {
                    n++;
                    s1 = s1 * -((x * x * 4) / ((2 * n - 1) * 2 * n));
                    s += s1;
                }
                if (x == 0)
                {
                    cout << showpoint << setw(3) << setprecision(2) << x << '|' << setprecision(8) << fixed << setw(11) << y << '|' << setw(11) << setprecision(8) << s << '|' << setw(1) << n << endl;
                }
                else
                    cout << showpoint << setw(3) << setprecision(1) << x << '|' << setprecision(8) << fixed << setw(11) << y << '|' << setw(11) << setprecision(8) << s << '|' << setw(1) << n << endl;
            }
        }
    }
    break;
    case 4:
    {
        bool resume = true;
        while (resume)
        {
            int n = 0;
            double x;
            cout << "n: ";
            cin >> n;

            cout << "x: ";
            cin >> x;
            double y = 1.0 + x * x / 2, y1 = x * x / 2;
            for (int i = 2; i <= n; i++)
            {
                y1 *= x * x / ((2 * i) * (2 * i - 1));
                y += y1;
                if (i == 3 || i == 5 || i == 10)
                {
                    cout << "Частичная сумма при " << i << " слагаемых = " << y << endl;
                }
            }
            cout << "y: " << y << endl;
            cout << "do you want to continue?(1/0)";
            cin >> resume;
        }
    }
    break;

    default:
        break;
    }

    return 0;
}
