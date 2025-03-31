// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int c=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=arr[i+1]){
            c=1;
        }
    }
    if(N==1||c==1){
        printf("Sorted");
    }
    // if(c==1){
    //     printf("Sorted");
    // }
    else{
        printf("Not Sorted");
    }

}