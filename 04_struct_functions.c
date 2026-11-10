#include <stdio.h>

/* 보충 실습: 매개변수의 복사본과 포인터가 가리키는 원본을 비교한다. */
struct point {
    int x, y;
};

void move_copy(struct point p)
{
    p.x += 10;
    printf("함수 안의 복사본: (%d, %d)\n", p.x, p.y);
}

void move_original(struct point *p)
{
    p->x += 10;
}

void print_point(const struct point *p)
{
    printf("호출 후 원본: (%d, %d)\n", p->x, p->y);
}

int main(void)
{
    struct point p = {2, 3};
    move_copy(p);
    print_point(&p);
    move_original(&p);
    print_point(&p);
    return 0;
}
