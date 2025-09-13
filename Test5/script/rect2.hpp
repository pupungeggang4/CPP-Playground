#pragma once
#include "vec2.hpp"

class Rect2 {
    public:
        Vec2 pos, size;
        Rect2(Vec2 pos, Vec2 size);
        float getArea();
};
