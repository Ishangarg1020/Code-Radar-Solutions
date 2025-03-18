// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("Average: %.2f",(a+b+c)/3);

    return 0;
}