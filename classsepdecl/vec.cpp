#include "general.hpp"
#include "fdef.hpp"
#include "vec.hpp"

Vec2::Vec2(float x, float y) {
    this->x = x;
    this->y = y;
}

bool Vec2::insideRect(shared_ptr<Rect2> rect) {
    return x > rect->pos->x - rect->size->x / 2 && x < rect->pos->x + rect->size->x / 2 && y > rect->pos->y - rect->size->y / 2 && y < rect->pos->y + rect->size->y / 2;
}