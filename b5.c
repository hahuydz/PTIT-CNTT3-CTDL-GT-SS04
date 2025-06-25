#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int left = 0, right = n-1, found = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Phan tu co trong mang tai vi tri: %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Phan tu khong co trong mang.\n");
    }

    return 0;
}
