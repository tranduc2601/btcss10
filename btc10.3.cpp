#include <stdio.h>
//insertion sort
int main() {
    int n, i, j, key;
    printf(" nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf(" nhap cac phan tu cua mang \n");
    for (i = 0; i < n; i++) {
        printf(" phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf(" mang sau khi tang dan: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

