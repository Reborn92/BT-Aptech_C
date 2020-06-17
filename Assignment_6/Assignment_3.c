// Nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat
#include <stdio.h>

int main(){
    int n;
    printf("Nhap so luong cua mang :");
    scanf("%d", &n);
    int ary[i];
    for(int i = 0; i < n; i++){
        printf("\nNhap phan tu thu %d cua mang: ", i+1);
        scanf("%d", &ary[i]);
    }
    int dem = 0, max = 0;
    for(int i = 0; i < n; i++){
        if(ary[i]>0){
            dem++;
        }else if(dem > max){
            max = dem;
            dem = 0;
        }
    }if(dem > max){
            max = dem;
    }printf("\nSo luong cac so duong lien tiep nhieu nhat la %d : ", max);
}