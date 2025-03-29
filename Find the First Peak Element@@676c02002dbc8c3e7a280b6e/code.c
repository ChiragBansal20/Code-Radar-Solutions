#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1=arr[0],  index=-1;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
            index=i;
            break;
        }
    }
    int max2=arr[index];
    for(int i=index; i<n; i++) {
        if(arr[i]>max1) {
            max2=arr[i];
            break;
        }
    }

    if(max1>max2) {
        printf("%d", max2);
    }
    else {
        printf("%d", max1);
    }
}