// Nhap vao mot mang n so nguyen, sau do nhap 1 so x. Tim xem co x trong mang khong
#include <stdio.h>

int main(){
    int n, x;
    printf("Nhap vao so luong cua mang so : ");
    scanf("%d", &n);
    int ary[n];
    for(int i = 0; i < n; i++){
        printf("\nNhap vao gia tri thu %d cua mang: ", i+1);
        scanf("%d", &ary[i]);
    }
    printf("\nNhap vao gia tri so x :");
    scanf("%d", &x);
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(ary[i] == x){
            dem ++;
        }
    }if(dem > 0){
        printf("\nSo %d co trong mang!", x); 
    }else  printf("\nSo %d khong co trong mang!", x);
}