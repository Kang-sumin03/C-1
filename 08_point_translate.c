#include <stdio.h>

typedef struct point {
    int x, y;
} POINT;

POINT translate(POINT p, POINT delta)
{
    POINT result = {p.x + delta.x, p.y + delta.y};
    return result;
}

int main(void)
{
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result = translate(p, delta);
    printf("(%d, %d)+(%d, %d)->(%d, %d)\n",
           p.x, p.y, delta.x, delta.y, result.x, result.y);
    return 0;
}
