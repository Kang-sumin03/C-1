#include <stdio.h>

int main(void)
{
    char chars[3];
    int ints[3];
    double doubles[3];
    char *pc = chars;
    int *pi = ints;
    double *pd = doubles;

    /* 각 포인터는 한 칸마다 자신이 가리키는 자료형의 크기만큼 이동한다. */
    printf("pc=%p, pc+1=%p, pc+2=%p (한 칸 %zu바이트)\n",
           (void *)pc, (void *)(pc + 1), (void *)(pc + 2), sizeof *pc);
    printf("pi=%p, pi+1=%p, pi+2=%p (한 칸 %zu바이트)\n",
           (void *)pi, (void *)(pi + 1), (void *)(pi + 2), sizeof *pi);
    printf("pd=%p, pd+1=%p, pd+2=%p (한 칸 %zu바이트)\n",
           (void *)pd, (void *)(pd + 1), (void *)(pd + 2), sizeof *pd);
    return 0;
}
