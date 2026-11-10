#include <stdio.h>

struct vector {
    double x, y;
};

struct vector get_vector_sum(struct vector a, struct vector b)
{
    struct vector result = {a.x + b.x, a.y + b.y};
    return result;
}

int main(void)
{
    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum = get_vector_sum(a, b);
    printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);
    return 0;
}
