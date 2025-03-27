// Your code here...
#include<stdio.h>
#include<stdlib.h>
 int main()
 {
    int N,dif;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0]-arr[1];
    int a,b;
    if(N==1)
    {
        printf("-1");
    }
    
    else
    {
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                    dif=abs(arr[i]-arr[j]);
                    if(dif<min)
                    {
                        min=dif;
                        a=arr[i];
                        b=arr[j];
                        return a,b
                    }

            }
        }
        printf("%d %d",a,b);
    }
    
 }