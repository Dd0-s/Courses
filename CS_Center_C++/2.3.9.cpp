void rotate(int a[], unsigned size, int shift)
{
    for (unsigned i = 0; i < shift; ++i){
        int first = a[0];
        for (unsigned j = 0; j < size - 1; ++j){
            a[j] = a[j + 1];
        }
        a[size - 1] = first;
    }
}
