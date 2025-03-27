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
    int temp=arr[0];
    for(int i=0; i<n; i++) {
        if(i==n-1) {
            arr[i]=temp;
        }
        else {
            arr[i]=arr[i+1];
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
}