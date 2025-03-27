// Your code here...
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=arr[N-1];
    int max=arr[N-1];
    for(int i=N-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            printf("%d ",arr[i]);
        }

    }
    printf("%d",a);
}