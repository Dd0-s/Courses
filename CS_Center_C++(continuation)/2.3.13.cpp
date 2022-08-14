auto gen_finder = [](int *a, int const*b){
    return [&a, &b](int i){
        bool R = false;
        for( int* j = a; j != b; ++j){
            if(*j == i){
                R = true;
            }
        }
        return R;
    };
};
