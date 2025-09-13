#include "rect2.hpp"

Rect2::Rect2(Vec2 pos, Vec2 size) {
    this->pos = pos;
    this->size = size;
}

float Rect2::getArea() {
    return size.x * size.y;
}
