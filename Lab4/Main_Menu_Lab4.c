#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 4              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra so nguyen to                          |\n");
        printf("| 3. Kiem tra so chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: {
            int min, max;
            int tong = 0, dem = 0;

            printf("Nhap min: ");
            scanf("%d", &min);

            printf("Nhap max: ");
            scanf("%d", &max);

            if (min > max) {
                printf("Loi: min phai nho hon hoac bang max!\n");
                break;
            }

            for (int i = min; i <= max; i++) {
                if (i % 2 == 0) {
                    tong += i;
                    dem++;
                }
            }

            if (dem == 0) {
                printf("Khong co so nao chia het cho 2 trong khoang nay!\n");
            } else {
                float trungBinh = (float)tong / dem;
                printf("Tong = %d\n", tong);
                printf("So luong = %d\n", dem);
                printf("Trung binh = %.2f\n", trungBinh);
            }

            break;
        }

        case 2: {
            int x;
            int laSoNguyenTo = 1;

            printf("Nhap so can kiem tra: ");
            scanf("%d", &x);

            if (x < 2) {
                    
            } else {
                for (int i = 2; i * i <= x; i++) {
                    if (x % i == 0) {
                        laSoNguyenTo = 0;
                        break;
                    }
                }
            }

            if (laSoNguyenTo)
                printf("%d la so nguyen to.\n", x);
            else
                printf("%d khong phai la so nguyen to.\n", x);

            break;
        }

        case 3: {
            int x;
            int laSoChinhPhuong = 0;

            printf("Nhap so can kiem tra: ");
            scanf("%d", &x);

            if (x >= 0) {
                for (int i = 0; i <= x; i++) {
                    if (i * i == x) {
                        laSoChinhPhuong = 1;
                        break;
                    }
                }
            }

            if (laSoChinhPhuong)
                printf("%d la so chinh phuong.\n", x);
            else
                printf("%d khong phai la so chinh phuong.\n", x);

            break;
        }

        case 4:
            printf("Thoat chuong trinh. Hen gap lai!\n");
            break;

        default:
            printf("Lua chon khong hop le! Vui long chon lai.\n");
        }

    } while (choice != 4);

    return 0;
}