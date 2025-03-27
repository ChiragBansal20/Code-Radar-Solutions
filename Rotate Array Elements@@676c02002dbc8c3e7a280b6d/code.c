#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d\n", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    k=k%n;
    int temp[k];
     for(int i=0; i<k; i++) {
        temp[i] = arr[i];
    }
    for(int i=k; i<n; i++) {
        arr[i-k] = arr[i];
    }
    for(int i=0; i<k; i++) {
        arr[n-k+i] = temp[i];
    }
    for(int i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
}