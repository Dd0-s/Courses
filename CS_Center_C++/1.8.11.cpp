#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c >= 0){
        double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << x1 << ' ' << x2;
    } else {
        cout << "No real roots";
    }
    return 0;
}
