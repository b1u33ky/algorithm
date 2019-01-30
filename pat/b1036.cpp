#include <cstdio>

int main(void)
{
    int row, col;
    char c;
    scanf("%d %c", &col, &c);
    if ((col % 2) == 0) row = col / 2;
    else row = col / 2 + 1;
    for (int i = 1; i <= row; i++) {
        if (i == 1) {
            for (int j = 0; j < col; j++) {
                printf("%c", c);
            }
            printf("\n");
        } else if (i <= row-1) {
            printf("%c", c);
            for (int j = 1; j < col-1; j++) {
                printf(" ");
            }
            printf("%c", c);
            printf("\n");
        } else {
            for (int j = 0; j < col; j++) {
                printf("%c", c);
            }
        }
    }
    return 0;
}
