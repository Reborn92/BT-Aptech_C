// Nhap vao den khi duoc 1 so vuot qua 1000. Bao ra ket qua so lan da nhap va gia tri trung binh cua cac lan nhap truoc la bao nhieu
#include <stdio.h>

int main(){
    int a,SL,S;
    float TB;
    printf("Nhap vao cac so cho den khi co mot so vuot qua 1000");
    S = 0;
    SL = 0;
    do{
        printf("\nNhap so tu ban phim: ");
        scanf("%d", &a);
        SL++; // So lan nhap
        S = S + a; // Tong gia tri cac lan nhap 
    }while(a<1000);
    TB = (float)S/SL;
    printf("\nGia tri trung binh cua cac lan nhap la : %f", TB);
    printf("\nSo lan nhap la : %d", SL);
}