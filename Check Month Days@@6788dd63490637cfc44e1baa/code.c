#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for(int i=1; i<=12; i++) {
        if(a%2!=0) {
            printf("31");
        }
    }
    for(int i=4; i<=12; i++) {
        if(a%2==0) {
            printf("30");
        }
    }
    if(a=2) {
        printf("2");
    }
    return 0;
}