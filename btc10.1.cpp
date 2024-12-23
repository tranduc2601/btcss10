#include <stdio.h>
// element:phan tu, found:tim 
int main() {
    int n, i, element, found = 0;
    printf(" nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf(" nhao cac phan tu cho mang: \n");
    for (i = 0; i < n; i++) {
        printf(" phan tu thu: %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" phan tu can ktr la: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf(" phan tu %d nam o vitri so %d (chi so tai  %d).\n", element, i + 1, i);
            found = 1;
        }
    }
    if (!found) {
        printf(" phann  tu khong co trong mang\n", element);
    }
    return 0;
}

