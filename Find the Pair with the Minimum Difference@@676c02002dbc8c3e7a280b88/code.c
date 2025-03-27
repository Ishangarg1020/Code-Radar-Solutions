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
    int a=0,b=0;
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
                if(arr[i]>arr[j])
                {
                    dif=arr[i]-arr[j];
                    if(dif<min)
                    {
                        min=dif;
                        a=arr[i];
                        b=arr[j];
                            
                    }
                }
                else
                {
                    dif=arr[j]-arr[i];
                    if(dif<min)
                    {
                        min=dif;
                        a=arr[i];
                        b=arr[j];
                            
                    }
                }

            }
        }
        printf("%d",min);
    }
    
 }