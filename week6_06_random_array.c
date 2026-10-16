/* 실습 6 | 26p: 2차원 배열에 0~99의 난수 저장하기 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5

int main(void)
{
    int s[ROWS][COLS];
    int i, j;

    srand((unsigned)time(NULL));
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            s[i][j] = rand() % 100;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
            printf("%02d ", s[i][j]);
        printf("\n");
    }
    return 0;
}
