// 한 줄 입력 (강의자료 36쪽)
#include <stdio.h>
#include <string.h>
int main(void) {
    char name[100];
    char address[100];

    printf("이름을 입력하시오: ");
    if (!fgets(name, sizeof(name), stdin))
        return 1;
    name[strcspn(name, "\r\n")] = '\0';

    printf("현재 거주하는 주소를 입력하시오: ");
    if (!fgets(address, sizeof(address), stdin))
        return 1;
    address[strcspn(address, "\r\n")] = '\0';

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
    return 0;
}
