/*
Program header 
1.Objective : Implementing Custom Pyramid Using For loop
                1
                1   2
                1   2   3
                1   2   3   4
                1   2   3
                1   2
                1
        
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main() {
    int current_row, current_col, total_rows = 4;
    for (current_row = 1; current_row <= total_rows; current_row++) {
        for (current_col = 1; current_col <= current_row; current_col++) {
            printf("%d ", current_col);
        }
        printf("\n");
    }

    for (current_row = total_rows - 1; current_row >= 1; current_row--) {
        for (current_col = 1; current_col <= current_row; current_col++) {
            printf("%d ", current_col);
        }
        printf("\n");
    }

    return 0;
}
