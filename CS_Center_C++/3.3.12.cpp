#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

    void append(String &other) {
        char *new_str = new char[size + other.size + 1];
        for (size_t i = 0; i < size; ++i){
            new_str[i] = str[i];
        }
        for (size_t i = 0; i < other.size; ++i){
            new_str[size + i] = other.str[i];
        }
        size += other.size;
        new_str[size] = '\0';
        delete[] str;
        this->str = new char[size + 1];
        strcpy(str, new_str);
        delete[] new_str;
    }

	size_t size;
	char *str;
};
