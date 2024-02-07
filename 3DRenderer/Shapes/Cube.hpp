#ifndef CUBE_HPP
#define CUBE_HPP

#include <SDL.h>
#include <vector>

class Cube
{
public:
    std::vector<Point3D> points{
                                    Point3D { -1.0f, -1.0f, -1.0f },
                                    Point3D { -1.0f, -1.0f,  1.0f },
                                    Point3D {  1.0f, -1.0f, -1.0f },
                                    Point3D { -1.0f,  1.0f, -1.0f },
                                    Point3D { -1.0f,  1.0f,  1.0f },
                                    Point3D {  1.0f, -1.0f,  1.0f },
                                    Point3D {  1.0f,  1.0f, -1.0f },
                                    Point3D {  1.0f,  1.0f,  1.0f }
    };

    std::vector<Vertex> vertices{
                                    Vertex { 0, 1 },
                                    Vertex { 0, 2 },
                                    Vertex { 0, 3 },
                                    Vertex { 2, 5 },
                                    Vertex { 3, 6 },
                                    Vertex { 3, 4 },
                                    Vertex { 4, 7 },
                                    Vertex { 6, 7 },
                                    Vertex { 7, 5 },
                                    Vertex { 5, 1 },
                                    Vertex { 4, 1 },
                                    Vertex { 2, 6 }
    };
};

#endif