#include <stdio.h>

int main() {
    int x, y, i, j;
    int m[10][10];

    do {
        printf("Donnez-moi les facteurs à multiplier x et y : ");
        scanf("%d %d", &x, &y);
    } while (x < 0 || y < 0);

    printf("x * y |");
    printf("\t------------------------------------------------------------------------------------------\n");

    for (i = 1; i <= x; i++) {
        printf("%d \t|", i);
        for (j = 1; j <= y; j++) {
            m[i][j] = i * j;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
