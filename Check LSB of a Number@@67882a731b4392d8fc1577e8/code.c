#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);

    if(n&1) {
        printf("Set");
    }
    else {
        printf("Not Set");
    }
    return 0;
}