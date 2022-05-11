#ifndef VERTEX_H
#define VERTEX_H
#pragma once

class Vertex{
    private:
        float x, y, z;
    public:
        Vertex();
        Vertex(float x, float y, float z);
        void print();
};
#endif