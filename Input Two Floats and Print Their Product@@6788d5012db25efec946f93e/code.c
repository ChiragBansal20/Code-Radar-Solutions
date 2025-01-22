#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f %f", &a,&b);
    float p=a*b;
    printf("Product: %.2f", p);
    return 0;
}