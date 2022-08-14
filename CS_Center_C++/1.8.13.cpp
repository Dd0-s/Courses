#include <iostream>
using namespace std;

int main()
{
    int T;
    double a;
    cin >> T;
    for (int i = 0; i < T; ++i){
        cin >> a;
        int p = 0;
        while (a >= 2){
          a /= 2;
          p += 1;
        }
        cout << p << endl;
    }
    return 0;
}
