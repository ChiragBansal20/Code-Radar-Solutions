#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    double avg=(a+b+c)/3;
    printf("Average: %.2lf", avg);
    return 0;
}