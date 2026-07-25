#include <stdio.h>

int main() {
    int i, j;

    for (i = 2; i <= 10; i += 3) {

        
        for (int k = i; k <= i + 2 && k <= 10; k++) {
            printf("Bang %d\t\t", k);
        }
        printf("\n");

       
        for (j = 1; j <= 10; j++) {
            for (int k = i; k <= i + 2 && k <= 10; k++) {
                printf("%d x %2d = %2d\t", k, j, k * j);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}