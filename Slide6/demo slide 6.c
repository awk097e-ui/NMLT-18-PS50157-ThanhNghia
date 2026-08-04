#include <stdio.h>
int main(){
    int n=5;
    int B[n];
    int C[n][n]={{1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}
};
 for (int i=0;i<n;i++){
    printf("Nhap A [%d]=",i);
    scanf("%d",&A[i]);
 }
    for (int i=0;i<n;i++){
        printf ("PT[%d]=%d\n",i+1,A[i]);
    }
    
    for (int i=0;i<n;i++){
        if (A[i]%2!=0)
        A[i]++;
    }
    printf("-------------\n");
    int d=3,c=4;
    int B[d][c];
    for (int i=0;i<d;i++){
        for (int j=0;j<c;j++){
            printf("B[%d,%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for (int i=0;i<d;i++){
        for (int j=0;j<c;j++){
            printf("B[%d,%d]=%d\n",i,j,B[i][j]);
        }
    }
    return 0;
}