#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
struct String {
     explicit String(const char *str = "") {
         this->size = strlen(str);
         this->str = new char[size + 1];
         for(size_t i = 0; i <= size; ++i){
             this->str[i] = str[i];
         }
         this->str[size] = '\0';
     }

     String(size_t n, char c) {
         this->size = n;
         this->str = new char[size + 1];
         for(size_t i = 0; i <= size; ++i){
             this->str[i] = c;
         }
         this->str[size] = '\0';
     }

     ~String() {
         delete[] str;
     }
    size_t size;
    char *str;
};
