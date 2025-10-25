#pragma once

class Vec2;
class Rect2;

class Rect2 {
    public:
        shared_ptr<Vec2> pos = make_shared<Vec2>(0, 0), rect = make_shared<Vec2>(0, 0);
        Rect2(shared_ptr<Vec2>, shared_ptr<Vec2>);
};

class Vec2 {
    public:
        float x = 0, y = 0;
        Vec2(float, float);
};