#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int result = a || b;
    printf(result);
    return 0;
}