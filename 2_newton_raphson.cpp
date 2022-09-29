#include <bits/stdc++.h>
using namespace std;

double f(double x){
    return pow(x,3)-4*x-9;
}

double derivatef(double x){
    return 3*pow(x,2) - 4;
}

int main(int argc, char const *argv[])
{
    cout << "********" << endl;
    cout << "Name : Archit jain" << endl;
    cout << "Branch : Btech-cse" << endl;
    cout << "section : CSE-B" << endl;
    cout << "topic : Newton Raphson" << endl;
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

    cout << "according to intermediate value property root lies between " << start << " and " << end << endl;
    cout << "enter your choice : ";
    
    
    double last = start;
    cin >> last;
    cout << "**iterations ***" << endl;
    double x = last - f(last)/derivatef(last);

    cout << "iteration " << i++ << " - " << x << endl;


    while (fabs(last-x)> 0.001){
        last = x;
        x = x - f(x)/derivatef(x);
        cout << "iteration " << i++ << " - " << x << endl;
    }

    cout << "ans is ";
    cout << x << endl;

    return 0;
}
