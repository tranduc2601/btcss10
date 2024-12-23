#include <stdio.h>
//selection sort
int main() {
    int n, i, j, minIndex, temp;
    printf(" nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf(" nhap cac phan tu cua mang \n");
    for (i = 0; i < n; i++) {
        printf(" phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printf(" mang sau khi tang dan: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

