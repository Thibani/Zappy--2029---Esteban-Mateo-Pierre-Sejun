#include <raylib.h>
#include "Map/Map.hpp"
#include "Camera/Camera.hpp"
#include "Renderer/Renderer.hpp"

int main() {
    InitWindow(1280, 720, "Zappy GUI");
    SetTargetFPS(60);

    // Hardcoded for now — will come from msz once server is connected
    Map    map(20, 20);
    PlayerView camera;
    camera.init(map.getWidth()  * Renderer::TILE_SIZE,
                map.getHeight() * Renderer::TILE_SIZE);

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();
        camera.handleInput(dt);

        BeginDrawing();
            ClearBackground({ 20, 20, 30, 255 });

            BeginMode3D(camera.get());
                Renderer::drawMap(map);
            EndMode3D();

            // HUD (2D overlay, always on top)
            DrawFPS(10, 10);
            DrawText("WASD: pan | RMB drag / Q-E: orbit | R-F: tilt | Scroll: zoom",
                     10, 40, 16, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}