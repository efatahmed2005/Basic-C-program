#include <stdio.h>

int main(){
    int row,column;
    printf("Enter the row numbers of the two matrixs : ");
    scanf("%d",&row);
    printf("Enter the column numbers of the two matrixs : ");
    scanf("%d",&column);    
    int martixa[row][column];
    int martixb[row][column];
    int sum[row][column];
    int n=1;
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            printf("%d.enter the element of row %d column %d : ",n,i+1,j+1);
            scanf("%d",&martixa[i][j]);
            n+=1;
        }
    }
     for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            printf("%d.enter the element of row %d column %d : ",n,i+1,j+1);
            scanf("%d",&martixb[i][j]);
            n+=1;
        }
    }
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            sum[i][j]=martixa[i][j]+martixb[i][j];
        }
    }
     printf("\nSum of the matrices:\n");
     for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}