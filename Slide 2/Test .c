#include  <stdio.h>
int main () {
    int namSinh;
    //UI/UX
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &namSinh);
    printf("Nam Sinh : %d\n", namSinh);
    printf("Tuoi cua ban la: %d", 2026 - namSinh);
    return 0;

    
}