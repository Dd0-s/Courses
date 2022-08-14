template<class It>
size_t max_increasing_len(It p, It q)
{
    size_t max =  1;
    size_t max_now = 1;
    It r = p;
    --q;
    for ( ; p != q; ++p){
        ++r;
        if (*p < *r){
            max_now += 1;
        }else if (max_now > max){
            max = max_now;
            max_now = 1;
        } else {
            max_now = 1;
        }
    }
    if (max_now > max){
        max = max_now;
    }
    return max;
}
