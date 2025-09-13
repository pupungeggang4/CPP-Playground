#pragma once
#include <cmath>
#include "rect2.hpp"

class Vec2 {
    public:
        float x, y;
        Vec2(float x = 0, float y = 0);
        float getSize();
};
