// 단어 세기 (강의자료 42쪽)
#include <ctype.h>
#include <stdio.h>

int count_word(const char *s);
int main(void) {
    int wc = count_word("the c book...");
    printf("단어의 개수: %d \n", wc);

    return 0;
}
int count_word(const char *s) {
    int i, wc = 0, waiting = 1;

    for (i = 0; s[i] != '\0'; ++i)        // s의 각 글자 조사
        if (isalpha((unsigned char)s[i])) // s의 글자가 알파벳이면
        {
            if (waiting) // 단어를 기다리고 있으면
            {
                wc++;        // 카운터를 증가
                waiting = 0; // 단어를 처리하는 중
            }
        } else           // 알파벳이 아니면
            waiting = 1; // 단어를 기다린다.

    return wc;
}
