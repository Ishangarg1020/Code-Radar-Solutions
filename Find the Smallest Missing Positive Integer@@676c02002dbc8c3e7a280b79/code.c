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
        for(int b=a+1;a<N;a++)
        {
            if(arr[b]<arr[a])
            {
                int a,b;
                b=arr[b];
                arr[b]=arr[a];
                arr[a]=b;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }

}