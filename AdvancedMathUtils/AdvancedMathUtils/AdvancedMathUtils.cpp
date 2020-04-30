// AdvancedMathUtils.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "AdvancedMathUtils.h"
#include "math.h"

int** init_canvas(int width, int height) {
    int** canvas = new int* [width];
    for (int i = 0; i < width; i++)
        canvas[i] = new int[height];

    for (int x = 0; x < width; x++)
        for (int y = 0; y < height; y++)
            canvas[x][y] = 0;

    return(canvas);
}

#ifdef __cplusplus
extern "C" {
#endif
    ADVANCEDMATHUTILS_API void map_circle(int radius, bool* out_arr) {
        int diameter = radius * 2;
        double radius_sqr = ((long long)radius) << 2;
        for (int x = -radius; x < radius; x++)
        {
            int hh = (int)sqrt(radius_sqr - (double)x * x);
            int rx = (radius + x) * diameter;
            int ph = radius + hh;

            for (int y = radius - hh; y < ph; y++) {
                out_arr[rx + y] = true;
            }
        }
    }
#ifdef __cplusplus
}
#endif
