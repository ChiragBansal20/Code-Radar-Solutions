#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int a;
    scanf("%d", &a);
    if(a==0 && a==1) {
        printf("Not Prime");
    }
    else if(a>1) {
        for(int i=2; i<=a; i++){
            if(a%i==0) {
                break;
            }
            printf("Not Prime");
        }
    }
    else {
        printf("Prime");
    }
    return 0;
}