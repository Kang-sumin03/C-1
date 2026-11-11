#include <stdio.h>

void swap(int x, int y)
{
    printf("x=%d y=%d\n", x, y);
    int tmp = x;
    x = y;
    y = tmp;
    printf("x=%d y=%d\n", x, y);
}

int main(void)
{
    int a = 100, b = 200;
    printf("a=%d b=%d\n", a, b);
    swap(a, b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
