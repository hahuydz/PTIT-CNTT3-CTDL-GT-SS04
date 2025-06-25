#include <stdio.h>
int main() {
    int n,x, found =0,index=-1;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang gia tri can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            found = 1;
        }
    }
    if (found) {
        printf("Chi so cuoi cung cua phan tu %d la: %d\n", x, index);
    }else {
        printf("Khong tim thay phan tu\n");
    }

}
