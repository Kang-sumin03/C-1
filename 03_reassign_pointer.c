#include <stdio.h>

int main(void)
{
    int x = 10, y = 20;
    int *p = &x;

    printf("p = %p\n*p = %d\n\n", (void *)p, *p);
    p = &y;
    printf("p = %p\n*p = %d\n", (void *)p, *p);
    return 0;
}
