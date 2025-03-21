// Your code here...
#include<stdio.h>
int main()
{
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    int arr[N];
    int count=0;
    for(int a=0;a<N;a++)
    {
        scanf("%d",arr[a]);
        if(arr[a]==K)
        {
            count+=1;
        }
        else 
        {
            continue;
        }
    }
    printf("%d",K);


    
}