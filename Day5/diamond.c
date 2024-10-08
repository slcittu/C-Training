#include <stdio.h>

int main() {
    int i, j, k, r;
    
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    
 
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= r - i; j++) {
            printf("*");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        for (j = 1; j <= r - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = r; i >= 1; i--) {
        for (j = 1; j <= r - i; j++) {
            printf("*");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        for (j = 1; j <= r - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;  
}
