// Your code here...
#include<stdio.h>
int main() {
    int num;
    scanf("%d", num);

    if(num==0) {
        printf("0");
    }
    int lowestbit = num & -num;

    int position=0;
    while(lowestbit > 1) {
        lowestbit >>= 1;
        position++;
    }
    printf("%d", position);
}