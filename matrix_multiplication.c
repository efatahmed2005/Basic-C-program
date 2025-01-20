#include <stdio.h>

int main()
{
    int row1, row2, column1, column2,n=1,sum=0;
    printf("Enter the first matrix's row number : ");
    scanf("%d", &row1);
    printf("Enter the first matrix's column number : ");
    scanf("%d", &column1);
    printf("Enter the second matrix's row number : ");
    scanf("%d", &row2);
    printf("Enter the second matrix's column number : ");
    scanf("%d", &column2);
    int matrix_a[row1][column1], matrix_b[row2][column2], result[row1][column2];
    if (column1 != row2)
    {
        printf("These two matrices can't be multiplied with one another.\n");
        return 0;
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            printf("%d.Enter the element of row %d column %d of 1st matrix : ",n,i+1,j+1);
            scanf("%d",&matrix_a[i][j]);
            n+=1;
        }
        
    }
        for(int i=0;i<row2;i++)
        {
        for(int j=0;j<column2;j++)
        {
            printf("%d.Enter the element of row %d column %d of 2nd matrix : ",n,i+1,j+1);
            scanf("%d",&matrix_b[i][j]);
            n+=1;
        }
        
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            sum=0;
            for(int k=0;k<column1;k++)
            {
                sum+=matrix_a[i][k]*matrix_b[k][j];
            }
            result[i][j]=sum;
        }
    }
    printf("\nMultiplied value of the given matrices is:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
           printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
