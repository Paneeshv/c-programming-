2#include <stdio.h>
#define N 1000

int main() {
    int arr[N];

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}
