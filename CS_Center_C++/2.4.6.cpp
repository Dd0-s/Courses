unsigned strlen(const char *str)
{
    unsigned len = 0;
    unsigned i = 0;
    while (str[i] != '\0'){
        len += 1;
        ++i;
    }
    return len;
}
