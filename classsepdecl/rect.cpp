#include "general.hpp"
#include "fdef.hpp"
#include "rect.hpp"

Rect2::Rect2(shared_ptr<Vec2> pos, shared_ptr<Vec2> size) {
    this->pos = pos;
    this->size = size;
}