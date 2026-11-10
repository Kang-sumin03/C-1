#include <stdio.h>

#define SIZE 100

struct QUESTION {
    char question[SIZE];
    char item1[SIZE], item2[SIZE], item3[SIZE], item4[SIZE];
    int solution;
};

int main(void)
{
    const struct QUESTION bank[] = {
        {"임베디드 장치에 가장 적합한 프로그래밍 언어는?",
         "1. Python", "2. Java", "3. C", "4. Javascript", 3},
        {"서로 다른 자료형을 모을 수 있는 구조는?",
         "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3}
    };

    for (size_t i = 0; i < sizeof bank / sizeof bank[0]; ++i) {
        const struct QUESTION *q = &bank[i];
        printf("%s\n%s   %s   %s   %s\n", q->question, q->item1, q->item2, q->item3, q->item4);
        for (;;) {
            int choice = getchar();
            if (choice == EOF) return 0;
            int end = (choice == '\n') ? '\n' : getchar();
            if (choice >= '1' && choice <= '4' && (end == '\n' || end == EOF)) {
                puts(choice - '0' == q->solution ? "맞았습니다.\n" : "틀렸습니다.\n");
                break;
            }
            while (end != '\n' && end != EOF) end = getchar();
            puts("1부터 4까지의 숫자 하나를 입력하세요.");
        }
    }
    return 0;
}
