char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *new_mem = new char[new_size];
    for (int i = 0; i < size && i < new_size; ++i){
        new_mem[i] = str[i];
    }
    delete[] str;
    return new_mem;
}
