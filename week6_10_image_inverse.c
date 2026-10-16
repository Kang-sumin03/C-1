/* 실습 10 | 43~44p: 2차원 배열로 표현한 이미지 반전하기 */
#include <stdio.h>
#define ROWS 8
#define COLS 16

int image[ROWS][COLS] = {
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1},
    {1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

void display(int img[ROWS][COLS])
{
    int r, c;
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            if (img[r][c] == 0)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
}

void inverse(int img[ROWS][COLS])
{
    int r, c;
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            if (img[r][c] == 0)
                img[r][c] = 1;
            else
                img[r][c] = 0;
        }
    }
}

int main(void)
{
    printf("변환전 이미지\n");
    display(image);
    inverse(image);
    printf("\n\n변환후 이미지\n");
    display(image);
    return 0;
}
