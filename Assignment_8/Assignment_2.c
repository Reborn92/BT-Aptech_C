// Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
// <ví dụ: 1 2 3 4 5 -4 -4 11 22 tổng số dương liên tiếp lớn nhất là 33>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *p;
    printf("Nhap so mang cua chuoi: ");
    scanf("%d", &n);
    p = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d : ", i);
        scanf("%d", p+i);
    }
    printf("in mang: ");
    for(int i = 0; i < n; i++){
        printf("%d", *(p+i));
    }
    int Sum = 0, max = 0;
    for(int i = 0; i < n; i++){
        if(*(p+i) > 0){
            Sum += *(p+i);
            if(Sum > max){
                max = Sum;
            }
        }else{
            Sum = 0;
        }
    }printf("\nChuoi duong co tong lon nhat la: %d", max);
}