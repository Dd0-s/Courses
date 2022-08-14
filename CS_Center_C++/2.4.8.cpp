unsigned strl(const char *str)
{
    unsigned len = 0;
    unsigned i = 0;
    while (str[i] != '\0'){
        len += 1;
        ++i;
    }
    return len;
}

int strstr(const char *text, const char *pattern)
{
    unsigned len1 = strl(text);
    unsigned len2 = strl(pattern);
    if (len2 == 0){
        return 0;
    }
    if (len2 > len1){
        return -1;
    }
    for (unsigned i = 0; i < len1 - len2 + 1; ++i){
        if (text[i] == pattern[0]){
            unsigned k = 0;
            while(text[i + k] == pattern[k]) {
                if (k == len2 - 1) {
                    return (int) i;
                }
                ++k;
            }
        }
    }
    return -1;
}
