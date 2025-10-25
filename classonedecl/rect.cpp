#include "general.hpp"
#include "decl.hpp"

Rect2::Rect2(shared_ptr<Vec2> pos, shared_ptr<Vec2> rect) {
    this->pos = pos;
    this->rect = rect;
}