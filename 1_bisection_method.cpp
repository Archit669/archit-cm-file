#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return pow(x, 3) - 4 * x - 9;
}

int main(int argc, char const *argv[])
{

    cout << "************************" << endl;
    cout << "finding root of equation using bisection method " << endl;
    cout << "************************" << endl;

    cout << "********" << endl;
    cout << "Name : Archit jain" << endl;
    cout << "Branch : Btech-cse" << endl;
    cout << "section : CSE-B" << endl;
    cout << "topic : bisection method" << endl;
    cout << "given expression is : x^3-4*x-9" << endl;
    cout << "********" << endl;

    double a = 0;
    double b = 1;

    while (f(a) * f(b) >= 0)
    {
        a++;
        b++;
    }

    double start = a;
    double end = b;
    int i = 1;

    cout << "**iterations ***" << endl;
    while (fabs(f(end) - f(start)) >= 0.001)
    {
        double mid = start + (end - start) / 2;
        cout << "At iteration " << i++ << " approximation to root is" << " - " << mid << endl;

        if (f(mid) * f(end) < 0)
        {
            start = mid;
        }
        else if (f(mid) * f(start) < 0)
        {
            end = mid;
        }
        else
        {
            if (start == 0)
                break;
            if (end == 0)
            {
                start = end;
                break;
            }

            if (mid == 0)
            {
                start = mid;
                break;
            }
        }
    }

    cout << "root of the given function using bisection method is ";
    cout << start << endl;

    return 0;
}
