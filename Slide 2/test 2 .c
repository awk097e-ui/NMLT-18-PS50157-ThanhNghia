#include <stdio.h>
int main (){
    int giaNgay = 200 ;
    int giaTuan = 1300;
    int soNgay ;

    int soTuan,soNgayLe;
    printf("Nhap So Ngay O KS : ");
    scanf("%d",&soNgay);
    soTuan=soNgay / 7;
    soNgayLe=soNgay % 7;    
    printf("So Ngay OKS : %d\n",soNgay);
    printf("So Tuan : %d\n",soTuan);     
    printf("So Ngay Le : %d\n",soNgayLe);
    printf("Tong Tien : %d",soTuan*giaTuan + soNgayLe*giaNgay);
    
    return 0;
}