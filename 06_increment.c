#include <stdio.h>

int main(void)
{
    int values[] = {10, 20};
    int *pi = values;

    printf("i = %d, pi = %p\n", values[0], (void *)pi);
    (*pi)++;  /* 첫 번째 원소의 값이 증가한다. */
    printf("i = %d, pi = %p\n", values[0], (void *)pi);
    int previous = *pi++;  /* 첫 원소를 읽고 포인터를 다음 원소로 옮긴다. */
    printf("i = %d, pi = %p\n", values[0], (void *)pi);
    printf("이전에 읽은 값 = %d, 현재 가리키는 값 = %d\n", previous, *pi);
    return 0;
}
