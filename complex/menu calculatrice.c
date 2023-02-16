#include <stdio.h>
#include <math.h>

int main () {
    char n, c;
    float a, b, y;
    do {
        printf(" ----Calculatrice:MENU-----\n");
        printf("1-addition.\n");
        printf("2-Soustraction.\n");
        printf("3-Multiplication.\n");
        printf("4-Division.\n");
        printf("5-reste d'une division entière.\n");
        printf("6-puissance.\n");
        printf("quel calcul veut tu effectuer ? \n");
        scanf(" %c", &c);
        printf(" donner le premier terme et le deuxieme terme \n");
        scanf("%f%f", &a, &b);
        switch (c) {
            case '1':
                y = a + b;
                printf("somme des deux reels = %f\n", y);
                break;
            case '2':
                y = a - b;
                printf("soustraction des deux reels = %f\n", y);
                break;
            case '3':
                y = a * b;
                printf("multiplication des deux reels = %f\n", y);
                break;
            case '4':
                if (b != 0) {
                    y = a / b;
                    printf("division des deux reels = %f\n", y);
                }
                else {
                    printf(" la divison par 0 est impossible \n");
                }
                break;
            case '5':
                y = (int) a % (int) b;
                printf("le resultas est %d\n", (int) y);
                break;
            case '6':
                printf("l'operateur est %.2f\n", pow(a, b));
                break;
            default:
                printf("l'operateur est incorrect\n");
                break;
        }
        printf("veut tu faire un autre calcul (O/N) ?\n");
        scanf(" %c", &n);
    } while (n == 'O' || n == 'o');
    return 0;
}
