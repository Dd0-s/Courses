int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int **m_t = new int *[cols];
    m_t[0] = new int[rows * cols];
    for (unsigned i = 1; i < cols; ++i){
        m_t[i] = m_t[i - 1] + rows;
    }
    for (unsigned i = 0; i < cols; ++i){
        for(unsigned j = 0; j < rows; ++j){
            m_t[i][j] = m[j][i];
        }
    }
    return m_t;
}
