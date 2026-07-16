#include <stdio.h>  
int main(){ 
    int diemToan, diemLy, diemHoa;
    float diemTB;
    printf("Nhap diem Toan, Ly, Hoa: ");
    scanf("%d %d %d", &diemToan, &diemLy, &diemHoa);
    printf("Diem Toan: %d\n", diemToan);
    printf("Diem Ly: %d\n", diemLy);
    printf("Diem Hoa: %d\n", diemHoa);
    diemTB = (diemToan*3 + diemLy*2 + diemHoa) / 6.0;
    printf("Diem trung binh: %.2f", diemTB);
    return 0;
}