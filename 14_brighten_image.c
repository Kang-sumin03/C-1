#include <stdio.h>

#define SIZE 5

void print_image(int image[][SIZE])
{
    for (int r = 0; r < SIZE; ++r) {
        for (int c = 0; c < SIZE; ++c) {
            printf("%03d ", image[r][c]);
        }
        putchar('\n');
    }
    putchar('\n');
}

void brighten_image(int image[][SIZE])
{
    for (int r = 0; r < SIZE; ++r) {
        int *pixel = image[r];
        for (int c = 0; c < SIZE; ++c) {
            *pixel += 10;
            ++pixel;
        }
    }
}

int main(void)
{
    int image[SIZE][SIZE] = {
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50},
        {10, 20, 30, 40, 50}
    };
    print_image(image);
    brighten_image(image);
    print_image(image);
    return 0;
}
