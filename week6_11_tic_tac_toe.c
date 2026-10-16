/* 실습 11 | 45p: 틱택토 (46~49p 예제 참고)
 * 강의 예제에 좌표/빈칸 검사와 승리/무승부 판정을 추가했다.
 * X부터 시작하며 x는 행, y는 열이다. 좌표 범위는 각각 0~2이다.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

void print_board(char board[SIZE][SIZE]);
int has_won(char board[SIZE][SIZE], char player);

int main(void)
{
    char board[SIZE][SIZE];
    char player = 'X';
    int x, y, moves = 0;
    int result, ch;

    for (x = 0; x < SIZE; x++)
        for (y = 0; y < SIZE; y++)
            board[x][y] = ' ';

    print_board(board);
    while (moves < SIZE * SIZE) {
        printf("%c 차례 - (x, y) 좌표 (행 열, 각각 0~2): ", player);
        result = scanf("%d %d", &x, &y);
        if (result == EOF)
            return 0;
        if (result != 2) {
            printf("정수 두 개를 입력하세요.\n");
            while ((ch = getchar()) != '\n' && ch != EOF) {
                /* 잘못 입력한 줄을 비운다. */
            }
            if (ch == EOF)
                return 0;
            continue;
        }
        if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) {
            printf("좌표는 0부터 2까지 입력하세요.\n");
            continue;
        }
        if (board[x][y] != ' ') {
            printf("이미 놓인 자리입니다. 다른 자리를 선택하세요.\n");
            continue;
        }

        board[x][y] = player;
        moves++;
        print_board(board);
        if (has_won(board, player)) {
            printf("%c 승리!\n", player);
            return 0;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    printf("무승부입니다.\n");
    return 0;
}

void print_board(char board[SIZE][SIZE])
{
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
    }
    printf("---|---|---\n");
}

int has_won(char board[SIZE][SIZE], char player)
{
    int i;
    for (i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player
            && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player
            && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player
        && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player
        && board[2][0] == player)
        return 1;
    return 0;
}
