#include <stdio.h>

int isPrime(int num);

int main() {
    int t, num;
    scanf("%d", &t);  // Read number of test cases
    while(t--) {
        scanf("%d", &num);  // Read the number to check for primality
        printf("%d\n", isPrime(num));  // Print result for each test case
    }
    return 0;
}

int isPrime(int num) {
    if(num <= 1) {
        return 0;  // Not prime if num is less than or equal to 1
    }
    for(int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if(num % i == 0) {
            return 0;  // Not prime if divisible by any number in range
        }
    }
    return 1;  // Prime number
}
