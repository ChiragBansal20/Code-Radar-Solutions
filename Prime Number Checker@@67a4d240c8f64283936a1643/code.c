#include <stdio.h>

int isPrime(int num);

int main() {
    int t;
    scanf("%d", &t);
    int j=1;
    while(j<=t) {
        int num;
        scanf("%d\n", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
int isPrime(int num) {
    int isprime=1;
    if(num<=1) {
        isprime=0;
    }
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) {
            isprime=0;
            break;
        }
    }
    if(isprime==1) {
        printf("1");
    }
    else {
        printf("0");
    }
}