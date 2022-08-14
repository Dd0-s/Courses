#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    char c = '\0';
    while (cin.get(c)) {
        if (c == ' '){
            if(flag){
                flag = false;
                cout << c;
            }
        } else {
            flag = true;
            cout << c;
        }
    }
    return 0;
}
