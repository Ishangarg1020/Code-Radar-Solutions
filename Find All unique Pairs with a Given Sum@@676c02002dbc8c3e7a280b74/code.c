// Your code here...
// Your code here...
#include<stdio.h>
int main()
{
    int N,T;
    scanf("%d",&N);
    int arr[N],ish[N][N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        // ish[N]=arr[N];
    }
    scanf("%d",&T);
    for(int a=0;a<N;a++)
    {
        for(int b=0;b<N;b++)
        {
            int sum=0;
            sum=arr[a]+arr[b+1];
            if(sum==T)
            {
                printf("%d",sum);
                printf("%d %d\n",arr[a],arr[b]);
            }
        }
    }
}