// Nhap mang n so nguyen, tim xe chuoi so duong ma co tong lon nhat la bao nhieu

#include <stdio.h>

int main(){
    int n;
    printf("Nhap so luong cua mang: ");
    scanf("%d", &n);
    int ary[n];
    for(int i = 0; i < n; i++){
        printf("\nNhap phan tu thu %d cua mang :", i+1);
        scanf("%d", &ary[i]);
    }
    int max = 0, MaxSum = 0;
    for(int i = 0; i < n; i++){
        if(ary[i] > 0){
            max += ary[i];
        }else if(max > MaxSum){
            MaxSum = max;
            max = 0;
        }
    }if(max > MaxSum){
        MaxSum = max;
    }printf("Chuoi so duong co tong lon nhat la : %d", MaxSum);
}