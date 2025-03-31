// Your code here...
// Your code here...
#include<stdio.h>
int main()
{
    int N,T,c=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        // ish[N]=arr[N];
    }
    scanf("%d",&T);
    for(int a=0;a<N;a++)
    {
        for(int b=a+1;b<N;b++)
        {
            int sum=0;
            sum=arr[a]+arr[b];
            if(arr[a]==arr[b]){
                printf("%d %d\n",arr[a],arr[b]);
                c=1;

                break;
            }
            
            // break;

            if(sum==T)
            {
                // printf("%d",sum);
                printf("%d %d\n",arr[a],arr[b]);
            }
        }
        if(c==1)
        {
            break;
        }
    }
}