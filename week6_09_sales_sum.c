/* 실습 9 | 36~37p: 2차원 배열을 함수에 전달하여 합계 구하기 */
#include <stdio.h>
#define YEARS 3
#define PRODUCTS 5

int sum(int scores[YEARS][PRODUCTS]);

int main(void)
{
    /* 각 행에서 생략된 나머지 두 원소는 0으로 초기화된다. */
    int sales[YEARS][PRODUCTS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int total_sale = sum(sales);

    printf("총매출은 %d입니다.\n", total_sale);
    return 0;
}

int sum(int scores[YEARS][PRODUCTS])
{
    int y, p;
    int total = 0;

    for (y = 0; y < YEARS; y++)
        for (p = 0; p < PRODUCTS; p++)
            total += scores[y][p];
    return total;
}
