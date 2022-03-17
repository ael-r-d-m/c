// C program to find the sum of two matrices of order 2*2

#include <stdio.h>

int main() {
    int x[2][2]; // declare first matrix
    int y[2][2]; //declare second matrix

    int result[2][2];

      // Taking input using nested for loop
    printf("Enter elements of first matrix:: \n");
    for(int s = 0; s < 2; ++s) {
        for(int j = 0; j < 2; ++j) {
            printf("Enter a %d%d: ", s++, j++);
            scanf("%d", &x[s][j]);
        }
    }

      // Taking input using nested for loop
    printf("Enter elements of second matrix:: \n");
    for(int s = 0; s < 2; s++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter a %d%d: ", ++s, ++j);
            scanf("%d", &y[s][j]);
        }
    }
    
      //adding corresponding elements of two arrays
    for(int s = 0; s < 2; s++) {
        for(int j = 0; j < 2; j++) {
            result[s][j] = x[s][j] + y[s][j];
        }
    }

      //displaying the sum
    printf("Sum of Matrix:: \n");

    for(int s = 0; s < 2; s++) {
        for(int j =0; j < 2; j++) {
            printf("%d\t", result[s][j]);

            if (j == 1)
                printf("\n");
        }
    }


    return 0;
}