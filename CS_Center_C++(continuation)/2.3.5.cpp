constexpr Point operator+ (Point const& A, Point const& B)
{
    return Point(A.x + B.x, A.y + B.y);
}

constexpr Point operator- (Point const& A, Point const& B)
{
    return Point(A.x - B.x, A.y - B.y);
}

constexpr double operator* (Point const& A, Point const& B)
{
    return A.x * B.x + A.y * B.y;
}
