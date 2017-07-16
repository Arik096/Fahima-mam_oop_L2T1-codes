#include<stdio.h>

int main()
{
    int A[1000];
    int N,k,i,d;
    printf("Enter size of the array:");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the location of the element:");
    scanf("%d",&k);

    d=A[k];
    for(i=k;i<=N;i++)
    {
        A[i]=A[i+1];
    }
    N=N-1;
    printf("Successfully deleted %d from the list\n",d);
    printf("NEW ARRAY:\n");
    for(i=1;i<=N;i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }
    return 0;
}

