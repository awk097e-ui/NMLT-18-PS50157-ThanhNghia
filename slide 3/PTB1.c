#include <stdio.h>
int main (){
  int a , b ;
  float x;
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);
  if (a == 0){
    if (b == 0){
      printf ("Phuong Trinh %d*x + %d = 0 co vo so nghiem", a, b);
    } else {
      printf ("Phuong Trinh %d*x + %d = 0 vo nghiem", a, b);
    }
  } else {
    x = (float)(-b)/a;
printf ("Phuong Trinh %d*x + %d = 0 co nghiem x = %.2f", a, b, x);
  }
  return 0; 
  }