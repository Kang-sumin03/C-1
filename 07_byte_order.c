#include <stdio.h>

int main(void)
{
    unsigned int data = 0x0A0B0C0D;
    const unsigned char *pc = (const unsigned char *)&data;

    for (size_t i = 0; i < sizeof data; ++i) {
        printf("*(pc + %zu) = %02X\n", i, (unsigned int)*(pc + i));
    }
    return 0;
}
