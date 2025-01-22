#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100],s1[100];
    int a;
    scanf("%s %d", &s,&a);
    scanf("%s", &s1);
    printf("Name: %s\n", s);
    printf("Age: %d\n",a);
    printf("Hobby: %s", s1);
    return 0;
}