#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    #define pi 3.14
    int r;
    scanf("%d", &r);
    float area = pi*r*r;
    printf("Area: %.2f", area);
    return 0;
}