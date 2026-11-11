#include <stdio.h>

int main(void)
{
    int i = 3000;
    int *p = &i;

    printf("p = %p\n&i = %p\n\n", (void *)p, (void *)&i);
    printf("i = %d\n*p = %d\n", i, *p);
    return 0;
}
