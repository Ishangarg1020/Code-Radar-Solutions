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
    
    for(int a=0;a<N;a++)
    {
        int count=1;
        for(int b=a+1;b<N;b++)
        {
            
            if(arr[b]==arr[a])
            {
                count+=1;
            }
        }
        if(count>N/2)
        {
            printf("%d",arr[a]);
            break;
            // break;
        }
        else if(a==N-1)
        {
            printf("-1");
        }
        // else
        // {
        //     printf("-1");
        //     // break;
        // }
    }
    
}




