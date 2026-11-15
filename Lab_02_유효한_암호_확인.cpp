// 유효한 암호 확인 (강의자료 45쪽)
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int lower_case_count = 0; // 소문자 개수
    int upper_case_count = 0; // 대문자 개수
    int digit_count = 0;      // 숫자 개수
    char pass[100];
    size_t len;

    printf("패스워드를 입력하시오: ");
    if (!fgets(pass, sizeof(pass), stdin))
        return 1;
    pass[strcspn(pass, "\r\n")] = '\0';

    len = strlen(pass); // 문자열의 길이
    if (len < 7) {
        printf("유효한 암호가 아닙니다. \n");
        return 0;
    }
    for (size_t i = 0; i < len; i++) {
        if (islower((unsigned char)pass[i]))
            ++lower_case_count;
        if (isupper((unsigned char)pass[i]))
            ++upper_case_count;
        if (isdigit((unsigned char)pass[i]))
            ++digit_count;
    }
    if (lower_case_count > 0 && upper_case_count > 0 && digit_count > 0)
        printf("강한 암호입니다. \n");
    else
        printf("유효한 암호가 아닙니다\n");
    return 0;
}
