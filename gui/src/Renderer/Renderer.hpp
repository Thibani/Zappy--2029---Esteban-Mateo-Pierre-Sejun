#pragma once
#include <raylib.h>
#include "../Map/Map.hpp"

class Renderer {
public:
    static constexpr float TILE_SIZE = 1.0f;  // 1 world unit per tile

    static void drawMap(const Map& map);
};