#pragma once
#include "mgl.hpp"
#include "context.hpp"

struct MGLDataType;

struct MGLFramebuffer {
    PyObject_HEAD
    PyObject * wrapper;
    MGLContext * context;
    int framebuffer_obj;
    int width;
    int height;
    int depth;
    int components;
    int levels;
    int samples;
};