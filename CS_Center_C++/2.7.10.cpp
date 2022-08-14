void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
    unsigned y_min = 0;
    for (unsigned i = 0; i < rows; ++i){
        for (unsigned j = 0; j < cols; ++j){
            if (m[i][j] < min){
                min = m[i][j];
                y_min = i;
            }
        }
    }
    int *help = m[y_min];
    m[y_min] = m[0];
    m[0] = help;
}
