#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}

int isPrime(int a)
{
    for(int j=2;j<a;j++)
    {
        if(a%j==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
