/* 실습 4 | 18p: 순차 탐색 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
    int key, i;
    /* 강의자료와 동일: 생략된 마지막 원소 list[9]는 0으로 초기화된다. */
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("탐색할 값을 입력하시오:");
    if (scanf("%d", &key) != 1)
        return 1;

    for (i = 0; i < SIZE; i++)
        if (list[i] == key)
            printf("탐색 성공 인덱스= %d\n", i);

    printf("탐색 종료\n");
    return 0;
}
