
#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the row numbers of the two matrixs : ");
    scanf("%d", &row);
    printf("Enter the column numbers of the two matrixs : ");
    scanf("%d", &column);
    int martixa[row][column];
    //int martixb[row][column];

    int n = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d.enter the element of row %d column %d : ", n, i + 1, j + 1);
            scanf("%d", &martixa[i][j]);
            n += 1;
        }
    }
    printf("\nEntered Matrix : \n");
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d  ", martixa[i][j]);
        }
        printf("\n");
    }
      printf("\nTranpose Matrix : \n");
    for(int i=0;i<column;i++){
        for (int j=0;j<row;j++){
            printf("%d ",martixa[j][i]);
        }
        printf("\n");
      }
        return 0;
}