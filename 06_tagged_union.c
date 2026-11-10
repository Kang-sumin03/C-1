#include <stdio.h>

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
    int type;
    union {
        int stu_number;
        char reg_number[15];
    } id;
    char name[20];
};

void print(struct student s)
{
    switch (s.type) {
    case STU_NUMBER:
        printf("학번: %d\n", s.id.stu_number);
        break;
    case REG_NUMBER:
        printf("주민등록번호: %s\n", s.id.reg_number);
        break;
    default:
        puts("타입 오류");
        return;
    }
    printf("이름: %s\n", s.name);
}

int main(void)
{
    struct student s1 = {STU_NUMBER, {.stu_number = 20190001}, "홍길동"};
    struct student s2 = {REG_NUMBER, {.reg_number = "860101-1056076"}, "김철수"};
    print(s1);
    print(s2);
    return 0;
}
