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

void strcat(char *to, const char *from)
{
    unsigned len1 = strlen(to);
    unsigned len2 = strlen(from);
    for (unsigned i = 0; i < len2 + 1; ++i){
        to[i + len1] = from[i];
    }
}
