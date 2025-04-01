// Your code here...
#include<stdio.h>
void miss(int arr[],int n,int k)
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
        current++
    }

}