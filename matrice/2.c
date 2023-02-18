#include <stdio.h>
int main( ) { 
    int l;
    int i,j;
    printf("Donner le nombre de ligne : \n");
    scanf("%d", &l);
     
    for (i = 1; i <=l; i++) {
        for (j = 1; j <= l - i; j++) {
            printf(" ");
        }
        for (j=1; j <= l; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
