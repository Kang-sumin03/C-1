// 메시지 암호화 (강의자료 84쪽)
#include <stdio.h>
#include <string.h>

void encrypt(char cipher[], int shift);

int main(void) {
    char cipher[50];
    int shift = 3;

    printf("문자열을 입력하시오: ");
    if (!fgets(cipher, sizeof(cipher), stdin))
        return 1;
    cipher[strcspn(cipher, "\r\n")] = '\0';
    // 한줄 전체 입력

    encrypt(cipher, shift);
    return 0;
}
void encrypt(char cipher[], int shift) {
    int i = 0;

    while (cipher[i] != '\0') {
        if (cipher[i] >= 'a' && cipher[i] <= 'z') {
            cipher[i] = char('a' + (cipher[i] - 'a' + shift) % 26);
        }
        i++;
    }

    printf("암호화된 문자열: %s", cipher);
}
