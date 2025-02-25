#include <stdio.h>

int isPrime(int num);

int main() {
    int t,num;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d\n", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
int isPrime(int num) {
    if(num<=1) {
        return 0;
    }
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}