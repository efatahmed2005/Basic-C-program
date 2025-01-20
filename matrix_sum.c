#include <stdio.h>

int main(){
    int martixa[3][4];
    int martixb[3][4];
    int sum[3][4];
    int n=1;
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            printf("%d.enter the element of row %d column %d : ",n,i+1,j+1);
            scanf("%d",&martixa[i][j]);
            n+=1;
        }
    }
     for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            printf("%d.enter the element of row %d column %d : ",n,i+1,j+1);
            scanf("%d",&martixb[i][j]);
            n+=1;
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            sum[i][j]=martixa[i][j]+martixb[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    

}