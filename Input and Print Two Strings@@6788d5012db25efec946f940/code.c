#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100],t[100];
    scanf("%s %s",&s,&t);
    printf("You entered: %s and %s", s,t);
    return 0;
}