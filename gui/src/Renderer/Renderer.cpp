#include "Renderer.hpp"

void Renderer::drawMap(const Map& map) {
    for (int y = 0; y < map.getHeight(); y++) {
        for (int x = 0; x < map.getWidth(); x++) {
            const Tile& tile = map.getTile(x, y);

            // Tile center position in 3D world
            Vector3 pos = {
                x * TILE_SIZE + TILE_SIZE / 2.f,
                0.f,
                y * TILE_SIZE + TILE_SIZE / 2.f
            };

            // Base grass color, tinted if resources are present
            Color color = (tile.q0 > 0) ? GREEN :
                          (tile.q1 > 0) ? YELLOW :
                          DARKGREEN;

            // Draw flat cube as tile (height = 0.1f so it has a tiny side)
            DrawCube(pos, TILE_SIZE, 0.1f, TILE_SIZE, color);
            DrawCubeWires(pos, TILE_SIZE, 0.1f, TILE_SIZE, BLACK);
        }
    }
}