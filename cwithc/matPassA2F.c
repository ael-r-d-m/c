// ::- Matrix Multiplication by passing arrays to functions

//Author :: @cs-joy : https://github.com/cs-joy

#include <stdio.h>

void take_data(int a[][10], int b[][10], int r1,int c1, int r2, int c2);
void multiplication(int a[][10],int b[][10],int mult[][10],int r1,int c1,int r2,int c2);
void display(int mult[][10], int r1, int c2);

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

    //Checking if matrix multiplication is possible
    while (c1!=r2)
    {
        printf("\nMatrices with entered orders can't be multiplied with each other.");
        printf("\nMake the column of the first matrix equal to the row of the second.\n");
        printf("\nEnter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    take_data(a,b,r1,c1,r2,c2);
    multiplication(a,b,mult,r1,c1,r2,c2);
    display(mult,r1,c2);
    return 0;
}

//This matrix takes the data of matrices.
void take_data(int a[][10], int b[][10], int r1,int c1, int r2, int c2)
{
    int i,j;
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
}

//This function multiplies the entered matrices.
void multiplication(int a[][10],int b[][10],int mult[][10],int r1,int c1,int r2,int c2)
{
    int i,j,k;
    /* Initializing elements of matrix mult to 0.*/
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            mult[i][j]=0;
        }
    /* Multiplying matrix a and b and storing in array mult. */
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                mult[i][j]+=a[i][k]*b[k][j];
            }
}

//This function displays the final matrix after multiplication.
void display(int mult[][10], int r1, int c2)
{
    int i, j;
    printf("\nThe product of the entered matrices is:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d  ",mult[i][j]);
            if(j==c2-1)
                printf("\n\n");
        }
}