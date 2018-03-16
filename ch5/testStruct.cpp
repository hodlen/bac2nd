#include <iostream>
using namespace std;

struct Point
{
    double x;
    double y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

Point operator+(const Point &A, const Point &B)
{
    return Point(A.x + B.x, A.y + B.y);
}

ostream &operator<<(ostream &out, const Point &p)
{
    out << "(" << p.x << "," << p.y << ")" << endl;
    return out;
}

int main(void)
{
    Point a, b(1, 2);
    a.x = 3;
    cout << a + b << endl;

    return 0;
}