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
    int min=__INT_MAX__;
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
                
                    dif=arr[i]-arr[j];
                    if(dif<0)
                    {
                        dif=-dif;
                    }
                    if(dif<min)
                    {
                        min=dif;
                        a=arr[i];
                        b=arr[j];
                            
                    }
                    else if(dif==min && arr[i]<a)
                    {
                            a=arr[i];
                            b=arr[j];
                    }
            }
        }
        if(a<b)
        {
            printf("%d %d",a,b);
        }
        else
        {
            printf("%d %d",b,a);
        }
    }
    
 }