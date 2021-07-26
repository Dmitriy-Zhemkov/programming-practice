#include <iostream>

using point = std::pair<int, int>;
class triangle
{
private:
    point a;
    point b;
    point c;
public:
    triangle() {
        a = std::make_pair(0, 0);
        b = std::make_pair(0, 0);
        c = std::make_pair(0, 0);
    }
    triangle(point a_, point b_, point c_) {
        a = std::make_pair(a_.first, a_.second);
        b = std::make_pair(b_.first, b_.second);
        c = std::make_pair(c_.first, c_.second);
    }
};

int main() 
{
    point a(1, 3);
    point b(4, 2);
    point c(7, 4);
    triangle triangle_a;
    triangle triangle_b(a, b, c);
}
