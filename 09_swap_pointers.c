#include <stdio.h>

void swap(int *px, int *py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{
    int a = 100, b = 200;
    printf("a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
