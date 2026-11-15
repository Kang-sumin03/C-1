// 문자열에 계산 결과 쓰기 (강의자료 69쪽)
#include <stdio.h>

int main(void) {
    char buffer[100];
    int x = 10, y = 20, result;

    result = x + y;
    snprintf(buffer, sizeof(buffer), "정수 %d와 정수 %d를 더하면 %d입니다.", x, y, result);

    printf("%s \n", buffer);
    return 0;
}
