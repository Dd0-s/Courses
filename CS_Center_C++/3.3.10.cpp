#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
     explicit String(const char *str = "") {
         this->size = strlen(str);
         this->str = new char[size + 1];
         for(size_t i = 0; i <= size; ++i){
             this->str[i] = str[i];
         }
     }
    size_t size;
    char *str;
};
