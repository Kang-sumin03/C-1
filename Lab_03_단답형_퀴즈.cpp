// 단답형 퀴즈 (강의자료 65쪽)
#include <stdio.h>
#include <string.h>

int main(void) {
    char key[] = "C";
    char buffer[80] = "";
    do {
        printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
        if (!fgets(buffer, sizeof(buffer), stdin))
            return 1;
        buffer[strcspn(buffer, "\r\n")] = '\0';

    } while (strcmp(key, buffer) != 0);

    printf("맞았습니다!");
    return 0;
}
