// 영상 파일 이름 생성 (강의자료 71쪽)
#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[100];
    int i;

    for (i = 0; i < 6; i++) {
        snprintf(filename, sizeof(filename), "image%d.jpg", i);
        printf("%s \n", filename);
    }
    return 0;
}
