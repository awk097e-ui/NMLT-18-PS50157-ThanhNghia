#include <stdio.h>
#include <string.h>

int main() {
    char mssv[20];
    char hoten[50];
    float toan, ly, hoa, dtb;

    // Nhập dữ liệu
    printf("Nhap ma so sinh vien: ");
    fgets(mssv, sizeof(mssv), stdin);
    mssv[strcspn(mssv, "\n")] = '\0';

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);
    hoten[strcspn(hoten, "\n")] = '\0';

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    dtb = (toan * 2 + ly + hoa) / 4;

    // Xuất kết quả
    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoten);
    printf("Diem Trung Binh: %.2f\n", dtb);

    return 0;
}