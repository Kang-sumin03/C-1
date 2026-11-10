#include <stdio.h>

union example {
    int i;
    char c;
};

int main(void)
{
    union example v = {0};
    v.c = 'A';
    printf("v.c: %c   v.i: %d\n", v.c, v.i);
    v.i = 10000;
    /* 같은 메모리의 첫 바이트를 숫자로 표시한다. 값은 바이트 순서에 따라 달라진다. */
    printf("v.c (16진수): 0x%02X   v.i: %d\n", (unsigned int)(unsigned char)v.c, v.i);
    return 0;
}
