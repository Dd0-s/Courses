#include <cstddef> // size_t

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

    String(const String &other);
    String &operator=(const String &other);

	void append(const String &other);

    class Proxy {
    public:
        explicit Proxy(char* start, int ind) : start(start), ind(ind) { };
        String operator [] (int index) const{
            char* help_str = new char[index - ind + 1];
            for (int i = 0; i < index - ind; ++i) {
                help_str[i] = (*(start + i));
            }
            help_str[index - ind] = '\0';
            String final_str(help_str);
            delete[] help_str;
            return final_str;
        }
    private:
        char* start;
        int ind;
    };

    Proxy operator [] (const int ind) const {return Proxy(str + ind, ind); }
    
	size_t size;
	char *str;
};
