#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n < 2) {
        printf("-1");
    }
    int max1=arr[0],  index=0;
    for(int i=0; i<n; i++) {
        if(arr[i]>max1) {
            max1=arr[i];
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