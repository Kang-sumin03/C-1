#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
    if (x1 == x2) {
        return -1;
    }
    *slope = (float)(((double)y2 - y1) / ((double)x2 - x1));
    *yintercept = (float)y1 - *slope * (float)x1;
    return 0;
}

int main(void)
{
    float slope, yintercept;

    if (get_line_parameter(3, 3, 6, 6, &slope, &yintercept) == -1) {
        puts("두 점의 x좌표가 같아 기울기를 구할 수 없습니다.");
    } else {
        printf("기울기는 %f, y절편은 %f\n", slope, yintercept);
    }
    return 0;
}
