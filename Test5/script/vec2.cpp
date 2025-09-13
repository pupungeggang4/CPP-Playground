#include "vec2.hpp"

Vec2::Vec2(float x, float y) {
    this->x = x;
    this->y = y;
}

float Vec2::getSize() {
    return std::sqrt(x * x + y * y);
}
