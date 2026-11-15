// 한영사전 (강의자료 80쪽)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define ENTRIES 5

int main(void) {
    int i;
    char dic[ENTRIES][2][30] = {
        {"book", "책"},       {"boy", "소년"}, {"computer", "컴퓨터"},
        {"language", "언어"}, {"rain", "비"},
    };
    char word[30];

    printf("단어를 입력하시오:");
    if (scanf("%29s", word) != 1)
        return 1;

    for (i = 0; i < ENTRIES; i++) {
        if (strcmp(dic[i][0], word) == 0) {
            printf("%s: %s\n", word, dic[i][1]);
            return 0;
        }
    }
    printf("사전에서 발견되지 않았습니다.\n");
}
