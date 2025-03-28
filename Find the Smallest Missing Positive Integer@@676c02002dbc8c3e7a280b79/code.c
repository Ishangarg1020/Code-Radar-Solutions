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
    int index=0;
    for(int a=0;a<N;a++)
    {
        for(int b=a+1;b<N;b++)
        {
            if(arr[a]>arr[b])
            {
                int f=arr[b];
                arr[b]=arr[a];
                arr[a]=f;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}