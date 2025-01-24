#include<stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c", &a,&b,&c);
    
    switch (c) {
        case '+': printf("%d\n", a+b);
                  break;
        case '-': printf("%d\n", a-b);
                  break;
        case '*': printf("%d\n", a*b);
                  break;
        case '/': 
        if(b!=0) {
            printf("%d\n", a/b);
        }                       
        else {
            printf("Error in case of any error\n");
        }       
        break;
        default:
            printf("Error in case of any error\n");
            break;
    }
    return 0;

}