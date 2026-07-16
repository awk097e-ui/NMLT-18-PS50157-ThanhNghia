#include <stdio.h>
#include <string.h>

int main() {
    char mssv[20];
    char hoten[50];
    int namsinh, tuoi;
    float dtb;

    // Nhập dữ liệu
    printf("Nhap ma so sinh vien: ");
    fgets(mssv, sizeof(mssv), stdin);
    mssv[strcspn(mssv, "\n")] = '\0';   

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);
    hoten[strcspn(hoten, "\n")] = '\0'; 

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);

    tuoi = 2026 - namsinh;

    
    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", dtb);


    return 0;
}