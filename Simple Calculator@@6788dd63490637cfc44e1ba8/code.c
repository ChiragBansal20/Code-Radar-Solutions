#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d %d %c", &a,&b,&c);
    switch (c) {
        case '+' : printf(a+b);
                break;
        case '-' : printf(a-b);
                break;
        case '*' : printf(a*b);  
                break;
        case '/' : printf(a/b);
                break;
        default : printf("error");                              
    }
    return 0;
}