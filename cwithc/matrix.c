//::- Matrix Multiplication without using function -::

/*
    Author :: cs-joy: https://github.com/cs-joy
*/



#include <stdio.h>

int main()
{
    //declare variable
    int nFr, nFc, nSr, nSc;
    int i, j, s, sum = 0;
    /*
        *number Of Columns Of First Matrix = nFr
        *number Of Columns Of First Matrix = nFc

        *number Of Columns Of Second Matrix = nSr
        *number Of Columns Of Second Matrix = nSc
    */

    int first[10][10], second[10][10], multiply[10][10];

    printf("\nEnter the number of rows and columns of first matrix:\n");
    scanf("%d%d", &nFr, &nFc);

    /*//Entering elements of first matrix
    printf("\nEnter the elements of first matrix\n");
    for (  i = 0 ; i < nFr ; i++ )
        for ( j = 0 ; j < nFc ; j++ )
            scanf("%d", &first[i][j]);*/

    printf("\nEnter the number of rows and columns of second matrix:\n");
    scanf("%d%d", &nSr, &nSc);

    //Checking if Matrix Multiplication is possible
    if ( nFc != nSr )
    {
        printf("\nMatrices with entered orders can't be multiplied with each other.\n");
        printf("\nThe column of first matrix should be equal to row of second.\n");
    }
    else
    {
        //Entering elements of first matrix
        printf("\nEnter the elements of first matrix:\n");
        for (  i = 0 ; i < nFr ; i++ )
            for ( j = 0 ; j < nFc ; j++ )
                scanf("%d", &first[i][j]);

        //Entering elements of second matrix
        printf("\nEnter the elements of second matrix:\n");
        for ( i = 0 ; i < nSr ; i++ )
            for ( j = 0 ; j < nSc ; j++ )
                scanf("%d", &second[i][j]);

        //Carrying out matrix multiplication operation
        for ( i = 0 ; i < nFr ; i++ )
        {
            for ( j = 0 ; j < nSc ; j++ )
            {
                for ( s = 0 ; s < nSr ; s++ )
                {
                    sum = sum + first[i][s]*second[s][j];
                }

                multiply[i][j] = sum;
                sum = 0;
            }
        }

        //Printing the final product matrix
        printf("\nThe product of entered matrices is:\n");
        for ( i = 0 ; i < nFr ; i++ )
        {
            for ( j = 0 ; j < nSc ; j++ )
                printf("%d\t", multiply[i][j]);

            printf("\n");
        }
    }

    return 0;
}