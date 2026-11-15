// 대문자 변환 (강의자료 40쪽)
#include <ctype.h>
#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (islower(c))
            c = toupper(c);
        putchar(c);
    }
    return 0;
}
