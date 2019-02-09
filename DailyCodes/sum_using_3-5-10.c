#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sum;
    scanf("%d",&sum);
    int ar[sum+1],i;
    memset(ar,0,(sum+1)*sizeof(int));
    int ways=getways(sum,&ar);
    printf("Number of ways %d",ways);
    return 0;
}
int getways(int sum,int *ar)
{
    int i,j,k;
    ar[0]=1;
    for(i=0,j=3;j<sum+1;i++,j++)
    {
            ar[j]=ar[j]+ar[i];
    }
    for(i=0,j=5;j<sum+1;i++,j++)
    {
            ar[j]=ar[j]+ar[i];
    }
    for(i=0,j=10;j<sum+1;i++,j++)
    {
            ar[j]=ar[j]+ar[i];
    }
    for(i=0;i<=sum;i++)
    printf("%d ",ar[i]);
    printf("\n");
    return ar[sum];
}
