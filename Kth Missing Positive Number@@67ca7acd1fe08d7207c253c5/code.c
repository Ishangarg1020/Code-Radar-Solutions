// Your code here...
#include<stdio.h>
int findKthMissing(int arr[],int n,int k)
{
    int index=0,current=1,missing=0;
    while(missing<k)
    {
        if(arr[index]==current&&index<n)
        {
            index++;
        }
        else
        {
            missing++;
            if(missing==k)
            {
                return current;
            }

        }
        current++;
    }

}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    int result=findKthMissing(arr,n,k);

    printf("%d\n",result);

    
}