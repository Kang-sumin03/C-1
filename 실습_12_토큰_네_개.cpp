// 토큰 네 개 (강의자료 62쪽)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
    char s[] = "Man is immortal, because he has a soul";
    char *token = strtok(s, " ");
    for (int i = 0; i < 4 && token != NULL; ++i) {
        printf("토큰: %s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
