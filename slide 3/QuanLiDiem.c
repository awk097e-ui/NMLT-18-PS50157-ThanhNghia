#include <stdio.h>
int main (){
    float diem;
    printf("Nhap diem: ");
    scanf("%f", &diem);
    if (diem >=5){
        printf("Dau");
    } else {
        printf("Rot");
    }
if (diem >= 8){
        printf(" - Gioi");
    } else if (diem >= 6.5){
        printf(" - Kha");
    } else if (diem >= 5){
        printf(" - Trung Binh");
    } else {
        printf(" - Yeu");
    }
    return 0;

}