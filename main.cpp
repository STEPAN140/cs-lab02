#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double b,a;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    cout << "Max(A,B) = " << max(a, b) << '\n';
    cout << "Min(A,B) = " << min(a, b) << '\n';
}

