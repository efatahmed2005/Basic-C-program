#include <stdio.h>
#include <string.h>

void sort(int num[], int size,int flow)
{
    if(flow==1){
        for (int i = 0; i < size; i++)
                                    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] < num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }}
    if(flow==2){
        for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    }
    
}
void print(int num[], int size,int flow)
{
    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n\n");
}

int main()
{
    int limit,flow;
    printf("Enter the expected limit of the array : ");
    scanf("%d",&limit);
    int num[limit];

    int size = sizeof(num) / sizeof(num[0]);

    printf("What do you want : 1.Greater to smaller or 2.Smaller to greater\n(select 1 or 2) : ");
    scanf("%d",&flow);

    for(int i=0;i<size;i++){
        printf("Enter the %d element of the array : ",i+1);
        scanf("%d",&num[i]);
    }

    sort(num, size,flow);
    print(num, size,flow);
    return 0;
}