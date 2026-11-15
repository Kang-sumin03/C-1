// 문자 검색 (강의자료 58쪽)
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "language";
    char c = 'g';
    char *p;
    int loc;

    p = strchr(s, c);
    if (p == NULL)
        printf("%c가 발견되지 않았음\n", c);
    else {
        loc = (int)(p - s);
        printf("%s에서 첫 번째 %c가 %d에서 발견되었음\n", s, c, loc);
    }
    return 0;
}
