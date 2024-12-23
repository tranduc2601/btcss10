#include <stdio.h>
//bubble sort
int main() {
    int n, i, j, temp;
    printf(" so phan tu cua mang la: ");
    scanf("%d", &n);
    int arr[n];
    printf(" hay nhap cac phan tu cua mang: \n");
    for (i = 0; i < n; i++) {
        printf(" phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf(" mang sau khi duoc sap xep theo thu tu tang dan la: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

