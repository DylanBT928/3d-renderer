#pragma once

#include <SDL.h>
#include <cmath>
#include <chrono>
#include <vector>

struct Point2D { float x, y; };
struct Point3D { float x, y, z; };
struct Vertex { int start, end; };

class Renderer3D
{
public:
    Renderer3D(SDL_Window* window, SDL_Renderer* renderer, std::vector<Point3D>& points, std::vector<Vertex>& vertices);
    void render();
private:
    Point3D rotateX(Point3D point);
    Point3D rotateY(Point3D point);
    Point2D projection(Point3D point);

    float rotation = 0.0f;
    float FOV = 10.0;
    float DeltaTime = 0.0f;

    int WindowSizeX;
    int WindowSizeY;
    SDL_Renderer* renderer;

    std::vector<Point3D> points;
    std::vector<Vertex> vertices;
};
