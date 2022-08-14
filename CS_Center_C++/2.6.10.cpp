#include <iostream>
using namespace std;

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *new_mem = new char[new_size];
    for (int i = 0; i < size && i < new_size; ++i){
        new_mem[i] = str[i];
    }
    delete[] str;
    return new_mem;
}

char *getline()
{
    char *str = new char[0];
    char c = '\0';
    unsigned i = 0;
    while(cin.get(c) && c != '\n'){
        str = resize(str, i, i + 1);
        str[i] = c;
        ++i;
    }
    str = resize(str, i, i + 1);
    str[i] = '\0';
    return str;
}
