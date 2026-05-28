#pragma once
#include <raylib.h>

class PlayerView {
public:
    PlayerView() = default;
    void init(float mapWidth, float mapHeight);

    void handleInput(float dt);

    Camera3D& get() { return _cam; }

private:
    Camera3D _cam   = {};
    Vector3  _target = {};

    float _distance = 20.f;
    float _angleH   = 45.f;
    float _angleV   = 50.f;

    float _panSpeed    = 0.3f;
    float _rotSpeed    = 80.f;
    float _zoomSpeed   = 5.f;

    void _updatePosition();
};