#include <stdio.h>

void main() {
    int r, i, j, k;

   
    printf("Enter the number of rows: ");
    scanf("%d", &r);

 
    for (i = r; i >= 1; i--) {
        
        for (j = 0; j < r - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == r) {
                printf("*");
            } else {
                printf(" ");
            }
        }


        printf("\n");
    }


}