#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d ", &arr[i]);
    }
    int count=0;
    for(int i=0; i<n; i++) {
        if(arr[i]<n) {
            if(arr[i]>=0) {
                count++;
            }
        }
        if(arr[i]==n) {
            count=1;
        }
        if(arr[i]>n) {
            count=1;
        }
        if(arr[i]<0){
            count=1;
        }
    }
    printf("%d", count);
}
