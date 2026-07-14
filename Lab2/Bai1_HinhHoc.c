#include <stdio.h>
#define PI 3.14
const float PII = 3.14;
int main() {
    float dai , rong , dienTichHCN , chuViHCN , r ,chuViHT , dienTichHT;
printf("Nhap chieu dai hinh chu nhat: ");
scanf("%f", &dai);
printf("Nhap chieu rong hinh chu nhat: ");
scanf("%f", &rong);
 chuViHCN = (dai + rong) * 2;
 dienTichHCN = dai * rong;
 printf("Chu vi hinh chu nhat: %.2f\n", chuViHCN);
 printf("Dien tich hinh chu nhat: %.2f\n", dienTichHCN);
 printf("Nhap ban kinh hinh tron: ");
 scanf("%f", &r);
 chuViHT = 2 * PI * r;
 dienTichHT = PI * r * r;
 printf("Chu vi hinh tron: %.2f\n", chuViHT);
 printf("Dien tich hinh tron: %.2f\n", dienTichHT);
 return 0; 
}