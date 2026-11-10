#include <stdio.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main(void)
{
    const char *days_name[] = {
        "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"
    };
    enum days d = WED;
    /* SUN이 0이므로 WED의 열거 상수 값은 3이다. */
    printf("%d번째 요일은 %s입니다\n", d, days_name[d]);
    return 0;
}
