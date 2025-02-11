#include<stdio.h>

int main() {
    int a,n;
    scanf("%d %d", &a,&n);

    if(n<0 || n>31) {
        printf("1");
    }
    int mask = (1<<n);
    n=n^mask;
    printf("%d", n);
}