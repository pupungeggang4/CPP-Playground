#pragma once
#include "general.hpp"
#include "fdef.hpp"
#include "vec.hpp"

class Rect2 {
    public:
        shared_ptr<Vec2> pos = make_shared<Vec2>(0, 0), size = make_shared<Vec2>(0, 0);
        Rect2(shared_ptr<Vec2>, shared_ptr<Vec2>);
};