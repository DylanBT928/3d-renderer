#include "3DRenderer.h"
#include <SDL.h>
#include <vector>

// Shape header files
#include "Shapes/Cube.hpp"

int main (int argc, char** argv)
{
    // Create a window and renderer
    SDL_Window* window = SDL_CreateWindow("3D Renderer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 960, 540, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool running = true;

    // Initialize current shape
    Cube shape;

    // Create a 3D renderer
    Renderer3D renderer3D1(window, renderer, shape.points, shape.vertices);

    while (running)
    {
        if (SDL_QuitRequested())
        {
            running = false;
            break;
        }

        renderer3D1.render();
    }

    return 0;
}
