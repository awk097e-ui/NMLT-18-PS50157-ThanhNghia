#include <stdio.h>  
int main(){ 
    int diemToan, diemLy, diemHoa;
    float diemTB;
    printf("Nhap diem Toan: ");
    scanf("%d", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%d", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%d", &diemHoa);

    
   
    diemTB = (diemToan*3 + diemLy*2 + diemHoa) / 6.0;
    printf("Diem trung binh: %.2f", diemTB);
    return 0;
}