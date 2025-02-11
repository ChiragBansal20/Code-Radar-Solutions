#include<stdio.h>

int main() {
    int a,n;
    scanf("%d %d", &a,&n);

    if(n<0 || n>31) {
        printf("1");
    }
    else {
        printf("0");
    }
    int bitval = (a >> n) & 1;
    printf("%d", bitval);
}