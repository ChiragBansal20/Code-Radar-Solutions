#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d ", &arr[i]);
    }
    int max, second_max;
    if (arr[0] > arr[1]) {
        max = arr[0];
        second_max = arr[1];
    } else {
        max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } 
        else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    if (max == second_max && n<2) {
        printf("-1");
    } 
    else {
        printf("%d", second_max);
    }
}