#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10][10], b[10][10], mul[10][10], row, col, i, j, k;

    system("cls");
    
    printf("Enter the number of row= ");
    scanf("%d", &row);
    printf("Enter the number of Column= ");
    scanf("%d", &col);

    //Get input from users for first matrix element
    printf("Enter the number of first matrix element= ");
    for(i = 0; i < row; i++) {
        for(j=0; i < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //Get input from users for second matrix element
    printf("Enter the number of second matrix element= ");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    //Multiplying
    printf("Multiply of the matrix=\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            mul[i][j] = 0;
            for(k = 0; k < col; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    //printing result
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", mul[i][j]);
        }

        printf("\n");
    }

    return 0;
}