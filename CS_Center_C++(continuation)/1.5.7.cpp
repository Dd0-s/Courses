typedef int (*func1) (double);
typedef int* (*func2) (char const*);
typedef func2 (*ComplexFunction) (int, func1);
