#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0],  index=-1;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
            index=i;
            break;
        }
    }
    for(int i=max(i); i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
            break;
        }
    }
    printf("%d", max);
}