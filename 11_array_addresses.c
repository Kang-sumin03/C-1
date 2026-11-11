#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};

    printf("&a[0] = %p\n", (void *)&a[0]);
    printf("&a[1] = %p\n", (void *)&a[1]);
    printf("&a[2] = %p\n", (void *)&a[2]);
    printf("a = %p\n", (void *)a);
    return 0;
}
