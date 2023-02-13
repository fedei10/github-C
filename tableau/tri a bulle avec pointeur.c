#include <stdio.h>

void permut (int *a, int *b) {
    int aux=*a;
    *a = *b;
    *b = aux;
}

void tri_bulle(int t[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (t[j] > t[j+1]) {
                permut(&t[j], &t[j+1]);
            }
        }
    }
}

int main() {
    int t[] = {64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(t)/sizeof(t[0]);
int i;
    printf("t  avant le tri : \n");
    for (i=0; i < n; i++){
	
        printf("%d ", t[i]);
}
    tri_bulle(t,n);

    printf("\n t après le tri : \n");
    for ( i=0; i < n; i++)
        printf("%d ", t[i]);
    return 0;
}
