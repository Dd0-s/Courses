    static char& get_c(Cls &cls) {
        char* ptr;
        ptr = (char*)&cls;
        return *ptr;
    };
    static double& get_d(Cls &cls) {
        double* ptr;
        ptr = (double*)( (char*)(&cls) ) + 1;
        return *ptr;
    };
    static int& get_i(Cls &cls) {
        int* ptr;
        ptr = (int*) ((double*)( (char*)(&cls) ) + 2);
        return *ptr;
    };
