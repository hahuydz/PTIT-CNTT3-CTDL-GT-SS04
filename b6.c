#include <stdio.h>

int main() {
    struct sinhVien {
        int id;
        char name[50];
        int age;
    };
    struct sinhVien sinhVien[5];
    for (int i = 0; i < 2; i++) {
        printf("Nhap ID sinh vien\n");
        scanf("%d", &sinhVien[i].id);
        getchar();
        printf("Nhap ten sinh vien\n");
        fgets(sinhVien[i].name, 50, stdin);
        sinhVien[i].name[strlen(sinhVien[i].name) - 1] = '\0';
        printf("Nhap tuoi sinh vien\n");
        scanf("%d", &sinhVien[i].age);
    }
    int id;
    printf("sinh vien can tim\n");
    scanf("%d", &id);
    for (int i = 0; i < id; i++) {
        if (sinhVien[i].id == id) {
            printf("Name: %s %d\n", sinhVien[i].name, sinhVien[i].age);
            return 0;
        }
    }
    printf("không có sinh viên");
}
