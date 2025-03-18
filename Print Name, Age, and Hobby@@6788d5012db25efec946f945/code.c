// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],str2[200],str3[300];
    scanf("%s %s %s",&str,&str2,&str3);
    printf("Name: %s\nAge: %s\nHobby: %s",str,str2,str3);
    return 0;
}