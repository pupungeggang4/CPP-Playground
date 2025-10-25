#include "general.hpp"
#include "vec.hpp"
#include "rect.hpp"

int main() {
    shared_ptr<Rect2> rect = make_shared<Rect2>(make_shared<Vec2>(10, 10), make_shared<Vec2>(20, 20));
    shared_ptr<Vec2> point = make_shared<Vec2>(10, 15);
    std::cout << point->insideRect(rect) << std::endl;
    return 0;
}