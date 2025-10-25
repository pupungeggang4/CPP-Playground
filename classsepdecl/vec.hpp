#pragma once
#include "general.hpp"
#include "fdef.hpp"
#include "rect.hpp"

class Vec2 {
    public:
        float x = 0, y = 0;
        Vec2(float, float);
        bool insideRect(shared_ptr<Rect2>);
};