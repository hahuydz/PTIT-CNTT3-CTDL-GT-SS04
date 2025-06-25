#include <stdio.h>

int main() {
    int n, x, found = 0;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Chi so dau tien cua phan tu %d la: %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}
