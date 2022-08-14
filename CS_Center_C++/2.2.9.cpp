#include <iostream>
using namespace std;

void foo() {
    int number;
    cin >> number;
    if (number != 0){
        foo();
        cout << number << ' ';
    }
}

int main()
{
    foo();
    return 0;
}
